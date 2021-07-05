cmake_minimum_required(VERSION 3.16.3)
project(kasperskyTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(scan_util
        src/main.cpp
        src/DirectoryScanner.cpp
        src/ScanReport.cpp
        src/FileScanner.cpp
        )

target_link_libraries(scan_util pthread)
