FROM ubuntu:16.04
FROM gcc:7

# Install the basics
RUN apt-get update && apt-get install -y python3 \
    build-essential \
    git \
    libgtest-dev \
    curl \
    zlib1g-dev \
    gcovr \
    lcov

# Install CMake
RUN  wget https://cmake.org/files/v3.12/cmake-3.12.0-rc1-Linux-x86_64.sh -O cmake.sh && \
     chmod +x cmake.sh && ./cmake.sh --skip-license --exclude-subdir --prefix=/usr/local
###############

RUN cd /usr/src/gtest && cmake . && make && \
    make && cp *.a /usr/lib

WORKDIR /
RUN git clone https://github.com/armatusmiles/cprogen-core.git \
    && cd cprogen-core \
    && mkdir build && cd build \
    && cmake ../ \
    && make moderncpp_coverage \
    && cd .. \
    && python3 -m unittest

CMD ["/bin/bash"]
