message("C flag is ${CMAKE_C_FLAGS}")
message("CXX flag is ${CMAKE_CXX_FLAGS}")

add_compile_options(-Wall -Wextra -pedantic -Werror)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -std=c99")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -std=c++11")

message("")
message("C flag is ${CMAKE_C_FLAGS}")
message("CXX flag is ${CMAKE_CXX_FLAGS}")

