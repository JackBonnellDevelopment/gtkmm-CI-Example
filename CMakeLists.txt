cmake_minimum_required(VERSION 3.16)
project(gtkmm-CI-Example)
find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)
# Set environment variables
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)