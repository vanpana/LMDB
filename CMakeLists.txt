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
        ui/gui/gui.h ui/gui/gui.cpp
        tests/test_controller.h common/counter.cpp common/counter.h tests/test_controller.cpp domain/validator.cpp domain/validator.h tests/test_entity.cpp tests/test_entity.h tests/test_watchlist.cpp tests/test_watchlist.h ui/gui/gui.cpp ui/gui/gui.h ui/gui/admin_gui.cpp ui/gui/admin_gui.h ui/gui/showAll_gui.cpp ui/gui/showAll_gui.h ui/gui/user_gui.cpp ui/gui/user_gui.h ui/gui/displayShort_gui.cpp ui/gui/displayShort_gui.h)

find_package(Qt5Widgets REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS})

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(LMDB ${SOURCE_FILES})

target_link_libraries(LMDB Qt5::Widgets)

target_link_libraries(LMDB gtest gtest_main)