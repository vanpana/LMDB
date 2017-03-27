cmake_minimum_required(VERSION 3.6)
project(LMDB)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        common/array.cpp
        common/array.h
        controller/controller.cpp
        controller/controller.h
        domain/entities.cpp
        domain/entities.h
        repository/repository.cpp
        repository/repository.h
        ui/console.cpp
        ui/console.h
        compile.sh
        main.cpp repository/watchlist.cpp repository/watchlist.h common/util.cpp common/util.h)

add_executable(LMDB ${SOURCE_FILES})