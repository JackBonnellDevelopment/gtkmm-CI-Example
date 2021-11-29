
# Set the project name
project (math)

# Add a library with the above sources
add_library(${PROJECT_NAME} src/math.cpp)
add_library(lib::math ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)