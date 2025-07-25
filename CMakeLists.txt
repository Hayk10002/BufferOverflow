cmake_minimum_required(VERSION 3.10)

project(BufferOverflow)

set(CMAKE_CXX_STANDARD 23)

add_executable(main main.cpp)

add_executable(mainSanitized main.cpp)
target_compile_options(mainSanitized PRIVATE -fsanitize=address)
target_link_options(mainSanitized PRIVATE -fsanitize=address)

enable_testing()
add_test(NAME MainTest COMMAND main)
add_test(NAME SanitizedTest COMMAND mainSanitized)
set_tests_properties(SanitizedTest PROPERTIES WILL_FAIL TRUE)