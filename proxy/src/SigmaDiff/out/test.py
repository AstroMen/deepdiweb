import os

path = 'Zoom-5.9.31911_libturbojpegstripped.so_vs_turbojpeg-2.1.2_libturbojpegstripped.so\Zoom_5.9.31911_libturbojpegstripped.so_nodelabel.txt'
  
# Check whether the specified
# path exists or not
isExist = os.path.exists(path)
s = 'Zoom-5.9.31911_libturbojpegstripped.so_nodelabel.txt'
s1 = 'Zoom_5.9.31911_libturbojpegstripped.so_nodelabel.txt'
print(s1 == s)