# Modern cpp library

## Investigates best way to build modern project for develop UNIX C++ library based on C API for binding any language. 

[![Docker Cloud Build Status](https://img.shields.io/docker/cloud/build/armatusmiles/cprogen-core.svg)](https://hub.docker.com/r/armatusmiles/cprogen-core)
[![codecov](https://codecov.io/gh/armatusmiles/cprogen-core/branch/master/graph/badge.svg)](https://codecov.io/gh/armatusmiles/cprogen-core)

| Build status          | Systems / Compilers         |
| ------------- | ------------------------------------------ |
| [![Build Status](https://travis-ci.org/armatusmiles/cprogen-core.svg?branch=master)](https://travis-ci.org/armatusmiles/cprogen-core) | Linux (gcc)   OSX (XCode 10.2 clang) |

## Features
- Creates shared(*.so, *.dylib) library
- [Unit testing](https://github.com/armatusmiles/modern-cpp-lib/blob/master/tests/main.cpp) with gtest
- [Python bindings](https://github.com/armatusmiles/modern-cpp-lib/blob/master/tests/test_api.py) Load library and call C API function from Python.
- [Codecov](https://codecov.io/gh/armatusmiles/cprogen-core) - reports generate automatically
- [Docker](https://github.com/armatusmiles/modern-cpp-lib/blob/master/Dockerfile) file and [auto build](https://hub.docker.com/r/armatusmiles/cprogen-core) with [Docker Hub](https://hub.docker.com/r/armatusmiles/cprogen-core)
- [Travis-CI](https://travis-ci.org/armatusmiles/cprogen-core) auto build for ubuntu xenial and osx

## Libraries used
- [Google Test (gtest)](https://github.com/google/googletest) - [test](https://github.com/armatusmiles/modern-cpp-lib/blob/master/tests/main.cpp) framework 
- [gcov](https://linux.die.net/man/1/gcov) / [lcov](https://linux.die.net/man/1/lcov) - generates and shows in html format code coverage


## References
- [ModernCppCI](https://github.com/LearningByExample/ModernCppCI)
- [cmake-modules](https://github.com/bilke/cmake-modules)
