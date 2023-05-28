cmake_minimum_required(VERSION 3.12)
project(APP VERSION 1.0.0 LANGUAGES C CXX)

file(GLOB_RECURSE MATH_LIB_SRC src/math/*.c)
add_library(math STATIC ${MATH_LIB_SRC})

add_executable(demo src/main.c)
target_link_libraries(demo math)

install(TARGETS math demo
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib)

file(GLOB_RECURSE HEADERS src/math/*.h)
install(FILES ${HEADERS} DESTINATION include/math)

include(CPack)
set(CPACK_GENERATOR "ZIP")
set(CPACK_OUTPUT_FILE_PREFIX "")
set(CPACK_INSTALL_PREFIX "")
set(CPACK_PACKAGE_NAME "CDemo")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_SET_DESTDIR ON)

option(CMAKE_TEMPLATE_ENABLE_TEST "whether to enable unit test" ON)
if (CMAKE_TEMPLATE_ENABLE_TEST)
  message(STATUS "unit test enable")
  enable_testing()
endif()

add_executable(test_add test/test_add.c)
target_link_libraries(test_add math)
add_test(NAME test_add COMMAND test_add 10 24 34)


