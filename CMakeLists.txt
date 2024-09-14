cmake_minimum_required(VERSION 3.10)

# Set the project name and specify C as the language
project(MyProject C)

# Add the two C files
add_executable(datacrafter IOFile.c main.c)

# Optionally, set the C standard version
set(CMAKE_C_STANDARD 99)
