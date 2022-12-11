#!/bin/sh

set -e
set -x

ROOT_PATH=$(cd "$(dirname $0)"; pwd)
cd ${ROOT_PATH}

#FFMPEG_PATH=${ROOT_PATH}/thirdparty/ffmpeg-4.3.1/
#${FFMPEG_PATH}/build.sh

#export PKG_CONFIG_PATH=${FFMPEG_PATH}/release/lib/pkgconfig:${PKG_CONFIG_PATH}

if test "${TOOLCHAIN_NAME}"
then
    export CC="${TOOLCHAIN_PREFIX}gcc"
    export CXX="${TOOLCHAIN_PREFIX}g++"
    export CPP="${TOOLCHAIN_PREFIX}g++ -E"
    export LD_LIBRARY_PATH=${TOOLCHAIN_LIB_PATH}:${LD_LIBRARY_PATH}
    export C_INCLUDE_PATH=${TOOLCHAIN_INCLUDE_PATH}:${C_INCLUDE_PATH}
    export CPLUS_INCLUDE_PATH=${TOOLCHAIN_INCLUDE_PATH}:${CPLUS_INCLUDE_PATH}
fi

TARGET_PATH=${ROOT_PATH}/release

rm   -rf ${ROOT_PATH}/build
mkdir -p ${ROOT_PATH}/build
mkdir -p ${TARGET_PATH}

cd ${ROOT_PATH}/build

cmake -D OPENCV_DOWNLOAD_MIRROR_ID=gitcode \
      -D CMAKE_C_COMPILER=${TOOLCHAIN_PREFIX}gcc \
      -D CMAKE_CXX_COMPILER=${TOOLCHAIN_PREFIX}g++ \
      -D CMAKE_INSTALL_PREFIX=${TARGET_PATH} \
      -D CMAKE_TOOLCHIAIN_FILE=../platforms/linux/aarch64-gnu.toolchain.cmake \
      -D BUILD_ZLIB=ON \
      -D BUILD_opencv_apps=OFF \
      -D INSTALL_CREATE_DISTRIB=ON \
      -D OPENCV_EXTRA_MODULES_PATH=../opencv_contrib-4.x/modules \
      -D CMAKE_EXE_LINKER_FLAGS="-pthread -ldl -lrt" \
      -D CMAKE_BUILD_TYPE=Release \
      -D OPENCV_GENERATE_PKGCONFIG=ON \
      -D BUILD_opencv_world=ON \
      -D BUILD_EXAMPLES=OFF \
      -D BUILD_TESTS=OFF \
      -D BUILD_PERF_TESTS=OFF \
      -D WITH_IPP=OFF \
      -D WITH_GTK=ON \
      -D WITH_GTK=ON \
      -D WITH_GTK_2_X=ON \
      -D WITH_FFMPEG=ON \
      -D WITH_GSTREAMER=ON \
      -D WITH_GSTREAMER_0_10=OFF \
      ..

# TODO: ADD ARM 32-bit support

# TODO: ADD X86 support

make -j8 | make install
cd -

TIME=`date +"%y%m%d%H%M%S"`
tar cvf opencv-4.6.0-Ubuntu18.04-${TIME}-release.tgz	release

#cp -frd ${FFMPEG_PATH}/release/* ${TARGET_PATH}
