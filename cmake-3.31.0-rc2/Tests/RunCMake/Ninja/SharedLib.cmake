enable_language(C)
add_library(greeting SHARED greeting.c)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(hello hello_with_greeting.c)
target_link_libraries(hello greeting)
include(CheckOutput.cmake)
include(CheckNoPrefixSubDir.cmake)