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
WORKDIR /tmp/cmake
RUN wget https://cmake.org/files/v3.10/cmake-3.10.0.tar.gz && \
    tar -xzvf cmake-3.10.0.tar.gz > /dev/null
WORKDIR cmake-3.10.0
RUN ./bootstrap > /dev/null && \
    make -j$(nproc --all) > /dev/null && \
    make install > /dev/null
WORKDIR /
RUN rm -rf /tmp/cmake
###############

RUN cd /usr/src/gtest && cmake . && make && \
    make install

RUN git clone https://github.com/armatusmiles/cprogen-core.git \
    && cd cprogen-core \
    && mkdir build && cd build \
    && cmake ../ \
    && make cprogen_core_coverage \
    && cd ../tests \
    && python3 -m unittest

CMD ["/bin/bash"]
