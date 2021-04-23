cmake_minimum_required(VERSION 3.14)
project(sapi C)

set(CMAKE_C_STANDARD 11)

include_directories("${PROJECT_SOURCE_DIR}" "/home/atr/local/include/")
find_library(URING_LIBRARY uring HINTS /home/atr/local/lib)

add_executable(sapi  src/main.c src/syscall.c src/prw_copy.c src/iouring_copy.c src/libiouring_copy.c)