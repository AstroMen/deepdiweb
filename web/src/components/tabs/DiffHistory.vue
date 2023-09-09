<template>
  <div class="diff-history-container">
    <ul class="diff-history-list">
      <li
        v-for="item in history"
        :key="item.timestamp"
        :class="{ 'selected': selectedItem === item }"
        class="diff-history-item"
      >
        <span class="item-text">
          {{ item.file1.projectName }} vs {{ item.file2.projectName }} - Uploaded by: {{ item.timestamp | formatTimestamp }}
        </span>
        <button @click.prevent="showCodeDiff(item)" class="diff-history-button">Choose</button>
      </li>
    </ul>
  </div>
</template>

<script>
// import {CODE_DIFF_UPLOAD_DIR} from "../../../../proxy/src/config";

import { getJsonContent } from '../../api/oda'

export default {
  name: 'DiffHistory',
  data() {
    return {
      history: [],
      selectedItem: null
    };
  },
  filters: {
    formatTimestamp(value) {
      if (!value) return '';
      const date = new Date(value);
      return `${date.getFullYear()}-${String(date.getMonth() + 1).padStart(2, '0')}-${String(date.getDate()).padStart(2, '0')} ${String(date.getHours()).padStart(2, '0')}:${String(date.getMinutes()).padStart(2, '0')}:${String(date.getSeconds()).padStart(2, '0')}`;
    }
  },
  async created() {
    try {
      this.jsonData = await getJsonContent();
      this.fetchDiffHistory();
    } catch (e) {
      console.error("Error fetching JSON content:", e);
    }
  },
  methods: {
    async fetchDiffHistory() {
      try {
        this.history = this.jsonData
      } catch (error) {
        console.error("There was a problem fetching the history:", error)
      }
    },
    showCodeDiff(item) {
      console.log(`Showing diff for: ${item.file1.projectName} vs ${item.file2.projectName}`)

      // Update selectedItem value when clicking item
      this.selectedItem = item;

      // Emit an event to notify the parent component
      this.$emit('show-diff', item);
    },
  },
};
</script>

<style>
.diff-history-container {
  display: flex;
  flex-direction: column;
  align-items: center;
  padding: 20px;
}

.diff-history-list {
  list-style-type: none;
  padding: 0;
  width: 100%;
}

.diff-history-item {
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 10px 20px;
  border: 1px solid #ccc;
  border-radius: 5px;
  margin-bottom: 10px;
  background-color: #f7f7f7;
  transition: background-color 0.3s;
}

.diff-history-item:hover {
  background-color: #e7e7e7;
}

.diff-history-item.selected {
  background-color: #ffa500; /* orange */
}

.item-text {
  flex-grow: 1;
}

.diff-history-button {
  padding: 5px 15px;
  border-radius: 5px;
  border: none;
  background-color: #007BFF;
  color: #fff;
  cursor: pointer;
  transition: background-color 0.3s;
}

.diff-history-button:hover {
  background-color: #0056b3;
}
</style>
