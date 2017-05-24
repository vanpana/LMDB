cmake_minimum_required(VERSION 3.6)
project(LMDB)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

set(CLANG_ENABLE_CODE_COVERAGE YES)
set(GCC_GENERATE_TEST_COVERAGE_FILES NO)
set(GCC_INSTRUMENT_PROGRAM_FLOW_ARCS NO)

set(SOURCE_FILES
        common/array.cpp
        common/array.h
        controller/controller.h
        domain/entities.cpp domain/entities.h
        repository/repository.cpp repository/repository.h
        ui/console.cpp ui/console.h
        main.cpp repository/watchlist.cpp repository/watchlist.h common/util.cpp common/util.h

        mainwindow.h mainwindow.cpp
        adminmode.h adminmode.cpp
        usermode.h usermode.cpp
        chart.h chart.cpp
        qcustomplot.h qcustomplot.cpp

        ui_mainwindow.h
        ui_adminmode.h
        ui_usermode.h
        ui_chart.h

        tests/test_controller.h common/counter.cpp common/counter.h tests/test_controller.cpp domain/validator.cpp domain/validator.h tests/test_entity.cpp tests/test_entity.h tests/test_watchlist.cpp tests/test_watchlist.h)

find_package(Qt5Widgets REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
find_package(Qt5PrintSupport REQUIRED)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
include_directories(QTBuild)

add_executable(LMDB ${SOURCE_FILES})

target_link_libraries(LMDB Qt5::Widgets)
target_link_libraries(LMDB Qt5::PrintSupport)

target_link_libraries(LMDB gtest gtest_main)