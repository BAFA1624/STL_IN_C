add_library(range range.c)
target_include_directories(range PUBLIC "${PROJECT_SOURCE_DIR}/include")
add_library(algorithm algorithm.c)
target_include_directories(algorithm PUBLIC "${PROJECT_SOURCE_DIR}/include")
