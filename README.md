# OpenCV_and_QT_static_CPP_project
Static QT and OpenCV C++ project

# 1. OpenCV installation for QT, OpenCV with debug and static 

## Instal Qtcreator

    sudo apt update
    sudo apt upgrade
    sudo apt install qtcreator   

### instal git

        sudo apt install git

### Install cmake

    sudo apt  install cmake        

### OpenCV from source

    git clone https://github.com/opencv/opencv




### CMake command without OpenCV CUDA 
  
  
    $ cd opencv
    /opencv$ mkdir build
    /opencv$ cd build
    /opencv/build$

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
    
# Additional opencv_contrib provides CUDA-specific functionality for OpenCV

## Install CUDA toolkit

https://developer.nvidia.com/cuda-downloads

    Linux -> x86_64 -> Ubuntu -> 22.04 -> deb(local)
  
    ...
    ...
  
    sudo reboot
    
    nvidia-smi
    +-----------------------------------------------------------------------------+
    | NVIDIA-SMI 525.85.12    Driver Version: 525.85.12    CUDA Version: 12.0     |
    |-------------------------------+----------------------+----------------------+
    | GPU  Name        Persistence-M| Bus-Id        Disp.A | Volatile Uncorr. ECC |
    | Fan  Temp  Perf  Pwr:Usage/Cap|         Memory-Usage | GPU-Util  Compute M. |
    |                               |                      |               MIG M. |
    |===============================+======================+======================|
    |   0  NVIDIA GeForce ...  Off  | 00000000:01:00.0 Off |                  N/A |
    | N/A   37C    P8     3W /  50W |      6MiB /  4096MiB |      0%      Default |
    |                               |                      |                  N/A |
    +-------------------------------+----------------------+----------------------+
                                                                                   
    +-----------------------------------------------------------------------------+
    | Processes:                                                                  |
    |  GPU   GI   CI        PID   Type   Process name                  GPU Memory |
    |        ID   ID                                                   Usage      |
    |=============================================================================|
    |    0   N/A  N/A      1792      G   /usr/lib/xorg/Xorg                  4MiB |
    +-----------------------------------------------------------------------------+

    
### NVCC not set permanet PATH
    
    export PATH=$PATH:/usr/local/cuda/bin
    nvcc --version
    nvcc: NVIDIA (R) Cuda compiler driver
    Copyright (c) 2005-2023 NVIDIA Corporation
    Built on Fri_Jan__6_16:45:21_PST_2023
    Cuda compilation tools, release 12.0, V12.0.140
    Build cuda_12.0.r12.0/compiler.32267302_0
    
### nano ~/.bashrc export PATH=$PATH:/usr/local/cuda/bin
    
    nano ~/.bashrc
    
    add line 
    
    export PATH=$PATH:/usr/local/cuda/bin
    
    CTRL o
    CTRL x


The 'opencv_contrib' repository contains additional modules and functionality that are not part of the main OpenCV distribution. The 'cudev' module provides CUDA-specific functionality for OpenCV.
   
    
    /opencv/build$ cd ..

    /opencv$ git clone https://github.com/opencv/opencv_contrib.git
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
 

    /opencv/build$
    
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
          
          
Example terminal view after cmake command
    
    
    ...
    ...
    lot of things above 
    ...
    ...
    
    -- 
    --   NVIDIA CUDA:                   YES (ver 10.2, CUFFT CUBLAS)
    --     NVIDIA GPU arch:             75
    --     NVIDIA PTX archs:            75
    -- 
    --   cuDNN:                         YES (ver 8.3.0)
    -- 
    --   OpenCL:                        YES (no extra features)
    --     Include path:                /home/olle/opencv/opencv/3rdparty/include/opencl/1.2
    --     Link libraries:              Dynamic load
    -- 
    --   Python (for build):            /usr/bin/python2.7
    -- 
    --   Java:                          
    --     ant:                         NO
    --     JNI:                         NO
    --     Java wrappers:               NO
    --     Java tests:                  NO
    -- 
    --   Install to:                    /usr/local
    -- -----------------------------------------------------------------
    -- 
    -- Configuring done
    -- Generating done
    -- Build files have been written to: /home/olle/opencv/build
    ~/opencv/build$ 
    
## Compile OpenCV    
    ~/opencv/build$ make
    
    



