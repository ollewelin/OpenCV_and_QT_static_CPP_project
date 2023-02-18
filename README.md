# OpenCV_and_QT_static_CPP_project
Static QT and OpenCV C++ project

# 1. OpenCV installation for QT, OpenCV with debug and static 

### OpenCV from source

  git clone https://github.com/opencv/opencv




### CMake command

  cmake -D CMAKE_BUILD_TYPE=RELEASE \
        -D CMAKE_INSTALL_PREFIX=/usr/local \
        -D BUILD_SHARED_LIBS=OFF \
        -D WITH_QT=ON \
        -D WITH_OPENGL=ON \
        -D CMAKE_BUILD_TYPE=DEBUG \
        -D CMAKE_CXX_FLAGS_DEBUG="-g" \
        ..
### Or With OpenCV CUDA support

  cmake -D CMAKE_BUILD_TYPE=RELEASE \
        -D CMAKE_INSTALL_PREFIX=/usr/local \
        -D BUILD_SHARED_LIBS=OFF \
        -D WITH_QT=ON \
        -D WITH_OPENGL=ON \
        -D WITH_CUDA=ON \
        -D CUDA_ARCH_BIN=6.1 \
        -D CUDA_ARCH_PTX=6.1 \
        -D CMAKE_BUILD_TYPE=DEBUG \
        -D CMAKE_CXX_FLAGS_DEBUG="-g" \
        ..
