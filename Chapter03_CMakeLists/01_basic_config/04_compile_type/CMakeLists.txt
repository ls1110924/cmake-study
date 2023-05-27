set(CMAKE_BUILD_TYPE Debug)

message("build type is ${CMAKE_BUILD_TYPE}")

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g -O0")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")

set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O2")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")



message("")
message("init C flag is ${CMAKE_C_FLAGS}")
message("init CXX flag is ${CMAKE_CXX_FLAGS}")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -std=c99")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -std=c++11")


message("")
message("C flag is ${CMAKE_C_FLAGS}")
message("CXX flag is ${CMAKE_CXX_FLAGS}")

