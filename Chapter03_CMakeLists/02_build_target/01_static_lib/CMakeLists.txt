#cmake_minimum_required(VERSION 3.12)

file(GLOB_RECURSE MATH_LIB_SRC src/math/*.c)
add_library(math STATIC ${MATH_LIB_SRC})