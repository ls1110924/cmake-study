cmake_minimum_required(VERSION 3.12)
project(APP VERSION 1.0.0 LANGUAGES C CXX)

add_library(add STATIC IMPORTED)
set_property(TARGET add PROPERTY
  IMPORTED_LOCATION "../src/c/math/add/libs/libadd.a")
#add_subdirectory("src/c/math/add")
add_subdirectory("src/c/math/minus")

add_executable(demo src/c/main.c)
target_link_libraries(demo add;minus)

