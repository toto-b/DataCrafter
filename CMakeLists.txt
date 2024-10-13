cmake_minimum_required(VERSION 3.10)

# Set the project name and specify C as the language
project(MyProject C)

# Add the C files
add_executable(datacrafter io_file.c main.c
        generator.h
        generator.c)

# Optionally, set the C standard version
set(CMAKE_C_STANDARD 99)
