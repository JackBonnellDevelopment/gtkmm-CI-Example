link_directories(
    ${GTKMM_LIBRARY_DIRS})

include_directories(
    ${GTKMM_INCLUDE_DIRS})

add_executable (main main.cpp)
target_link_libraries(main ${GTKMM_LIBRARIES} sub::math)
configure_file( ${CMAKE_SOURCE_DIR}/src/window.glade ${CMAKE_BINARY_DIR}/src/window.glade COPYONLY)