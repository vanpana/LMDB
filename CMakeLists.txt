cmake_minimum_required(VERSION 3.6)
project(LMDB)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        common/array.cpp
        common/array.h
        common/util.c
        common/util.h
        controller/controller.cpp
        controller/controller.h
        domain/entities.cpp
        domain/entities.h
        repository/repository.cpp
        repository/repository.h
        ui/console.cpp
        ui/console.h
        compile.sh
        main.cpp)

add_executable(LMDB ${SOURCE_FILES})