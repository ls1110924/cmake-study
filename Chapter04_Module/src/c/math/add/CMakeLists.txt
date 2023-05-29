cmake_minimum_required(VERSION 3.12)
project(add VERSION 1.0.0 LANGUAGES C CXX)

aux_source_directory(. ADD_SRC)
message("ADD_SRC: ${ADD_SRC}")

add_library(add STATIC ${ADD_SRC})