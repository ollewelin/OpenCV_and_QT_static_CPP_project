# OpenCV_and_QT_static_CPP_project
Static QT and OpenCV C++ project

# 1. OpenCV installation for QT, OpenCV with debug and static 

### OpenCV from source

  git clone https://github.com/opencv/opencv




### CMake command without OpenCV CUDA 
  
  
    /opencv$ cd opencv
    /opencv/opencv$ mkdir build
    /opencv/opencv$ cd build
    /opencv/opencv/build$

    cmake -D CMAKE_BUILD_TYPE=RELEASE \
          -D CMAKE_INSTALL_PREFIX=/usr/local \
          -D BUILD_SHARED_LIBS=OFF \
          -D WITH_QT=ON \
          -D WITH_OPENGL=ON \
          -D CMAKE_BUILD_TYPE=DEBUG \
          -D CMAKE_CXX_FLAGS_DEBUG="-g" \
          ..
### Or With OpenCV CUDA support 

Possible to call 

    cv::cuda 
    
### Additional opencv_contrib provides CUDA-specific functionality for OpenCV

The 'opencv_contrib' repository contains additional modules and functionality that are not part of the main OpenCV distribution. The 'cudev' module provides CUDA-specific functionality for OpenCV.


    
    
    /opencv/opencv/build$ cd ..

    /opencv/opencv$ git clone https://github.com/opencv/opencv_contrib.git
    cd opencv_contrib
    opencv/opencv_contrib$ git checkout 4.7.0
    Note: switching to '4.7.0'.
    ...
    ...



I have NVIDIA GeForce GTX 1650 graphics card is based on the Turing architecture and supports CUDA compute capability 7.5

CUDA_ARCH_BIN=7.5

Find you architecture at
https://developer.nvidia.com/cuda-gpus

cmake command
 

    /opencv/opencv/build$
    
    cmake -D CMAKE_BUILD_TYPE=RELEASE \
          -D CMAKE_INSTALL_PREFIX=/usr/local \
          -D BUILD_SHARED_LIBS=OFF \
          -D WITH_QT=ON \
          -D WITH_OPENGL=ON \
          -D WITH_CUDA=ON \
          -D CUDA_ARCH_BIN=7.5 \
          -D CUDA_ARCH_PTX=7.5 \
          -D CMAKE_BUILD_TYPE=DEBUG \
          -D CMAKE_CXX_FLAGS_DEBUG="-g" \
          -D OPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules \
          -D OPENCV_ENABLE_NONFREE=ON \
          ..
