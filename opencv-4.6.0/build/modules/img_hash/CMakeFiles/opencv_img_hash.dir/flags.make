# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# compile CXX with /usr/bin/g++
CXX_FLAGS =    -fsigned-char -W -Wall -Wreturn-type -Wnon-virtual-dtor -Waddress -Wsequence-point -Wformat -Wformat-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wuninitialized -Wsuggest-override -Wno-delete-non-virtual-dtor -Wno-comment -Wimplicit-fallthrough=3 -Wno-strict-overflow -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -fvisibility-inlines-hidden -O3 -DNDEBUG  -DNDEBUG -fPIC   -std=c++11

CXX_DEFINES = -DCVAPI_EXPORTS -D_USE_MATH_DEFINES -D__OPENCV_BUILD=1 -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS

CXX_INCLUDES = -I/home/dawn/dawn/workspace/opencv-4.6.0/build -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/img_hash/include -I/home/dawn/dawn/workspace/opencv-4.6.0/build/modules/img_hash -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/core/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/flann/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/imgproc/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/intensity_transform/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/ml/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/phase_unwrapping/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/photo/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/plot/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/quality/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/reg/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/surface_matching/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/xphoto/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/dnn/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/dnn_superres/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/features2d/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/fuzzy/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/hfs/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/imgcodecs/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/line_descriptor/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/saliency/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/text/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/videoio/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/barcode/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/calib3d/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/datasets/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/highgui/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/mcc/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/objdetect/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/rapid/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/rgbd/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/shape/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/structured_light/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/video/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/videostab/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/wechat_qrcode/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/xfeatures2d/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/ximgproc/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/xobjdetect/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/aruco/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/bgsegm/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/bioinspired/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/ccalib/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/dnn_objdetect/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/dpm/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/face/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/gapi/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/optflow/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/stitching/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/superres/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/tracking/include -I/home/dawn/dawn/workspace/opencv-4.6.0/opencv_contrib-4.x/modules/stereo/include -I/home/dawn/dawn/workspace/opencv-4.6.0/modules/world/include 

