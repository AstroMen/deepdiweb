<template>
  <div>
    <div class="diff-jq"></div>
    <div class="diff-content" >
    </div>
    <div v-if="code_diff_loading"> 
      <div class="loading">
        <b-spinner label="Loading..." variant="primary"></b-spinner>
      </div>
    </div>
    <div v-else>
      <div class="uploadSection" >
          <button
          id="platform-btn"
          type="button"
          class="btn btn-outline-primary btn-lg"
          @click="uploadFile(0)"
          >
          <div v-if="codeDiffFiles[0]">
            {{ codeDiffFiles[0] }}
          </div>
          <div v-else>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;File1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
          </div>
          </button>
          <button
          id="platform-btn"
          type="button"
          class="btn btn-outline-primary btn-lg"
          @click="uploadFile(1)"
          >
          <div v-if="codeDiffFiles[1]">
            {{ codeDiffFiles[1] }}
          </div>
          <div v-else>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;File2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
          </div>
          </button>
          <button
          type="button"
          class="btn btn-outline-primary btn-lg"
          @click="startDiff()"
          >OK</button>
      </div>
    </div>
  </div>
  
</template>
  <script>
  import { mapState } from 'vuex'
  import { bus, SHOW_FILE_UPLOAD_MODAL } from "../../bus";
  import { UPLOADFILESWITCH, SET_CODE_DIFF_FUNCTION_LIST, SET_CODE_DIFF_LOADING } from '../../store/mutation-types'
  import { getScript, sendTwoFileNames, getFunctionList } from '../../api/oda'
  import $ from 'jquery'

  export default {
    name: 'CodeDiff',
    data () {
      return {
        loading_state: false,
      }
    },
    created() {
      this.fetchData()
    },
    computed: mapState(['projectName', 'code_diff_loading','codeDiffFiles','codeDiffResult','shortName']),
    mounted () {
    },
    methods: {
      async fetchData()  {
        let response = await getScript()
        if(response) {
          $('.diff-jq').replaceWith(response.script_result)
        }
      },
      uploadFile (num) {
        this.$store.commit(UPLOADFILESWITCH,{ num: 2 })
        bus.$emit(SHOW_FILE_UPLOAD_MODAL,num)
      },    
      async startDiff() {
        //this.loading_state = true
        //TODO: add condition to check if it is ready to start diffing
        $('.diff-content').replaceWith(`<div class="diff-content"></div>`)
        this.$store.commit(SET_CODE_DIFF_FUNCTION_LIST, { list: [] })   
        this.$store.commit(SET_CODE_DIFF_LOADING,{ loadingState: true})
        //let response = await sendTwoFileNames(this.codeDiffFiles[0],this.codeDiffFiles[1])

        if(true) {
          let function_list = await getFunctionList()         
          this.$store.commit(SET_CODE_DIFF_FUNCTION_LIST, { list: function_list.functions })   
          //this.loading_state = false
          this.$store.commit(SET_CODE_DIFF_LOADING,{ loadingState: false})
        }

      },
    }
  }
  </script>
  
  <style scoped>
    .file-info-label {
      vertical-align: top;
      color: #093C83;
    }
    .file-info-table {
      font-family: monospace;
      font-size: 14px;
      line-height: 14px;
      color: dimgrey;
    }
    .uploadSection {
      text-align:center;
      margin-top: 20%;
    }
    .uploadButton1 {
      text-align:center;
      margin-top: 20%;
    }
    .uploadButton2 {
      text-align:center;
      margin-top: 5%;
    }
    .loading {
      text-align:center;
      margin-top:20%
    }
    .diff-jq {
      margin-top: 0px;
    }
    
  </style>
  