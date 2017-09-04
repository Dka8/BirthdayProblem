cmake_minimum_required(VERSION 3.7)

add_executable(main main.cpp)
target_compile_options(main PRIVATE -Wall -Wextra -Werror -Wpedantic -Wshadow -O0 -ggdb3)
