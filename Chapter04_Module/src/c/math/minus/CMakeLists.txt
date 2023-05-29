cmake_minimum_required(VERSION 3.12)
project(minus VERSION 1.0.0 LANGUAGES C CXX)

aux_source_directory(. MINUS_SRC)
message("MINUS_SRC: ${MINUS_SRC}")

add_library(minus STATIC ${MINUS_SRC})