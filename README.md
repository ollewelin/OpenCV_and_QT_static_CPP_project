# OpenCV_and_QT_static_CPP_project
Static QT and OpenCV C++ project

# 1. OpenCV installation for QT, OpenCV with debug and static 


### CMake command

  cmake -D CMAKE_BUILD_TYPE=RELEASE \
        -D CMAKE_INSTALL_PREFIX=/usr/local \
        -D BUILD_SHARED_LIBS=OFF \
        -D WITH_QT=ON \
        -D WITH_OPENGL=ON \
        -D CMAKE_BUILD_TYPE=DEBUG \
        -D CMAKE_CXX_FLAGS_DEBUG="-g" \
        ..

