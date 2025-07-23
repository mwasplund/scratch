cmake_minimum_required(VERSION 3.28)
project(std_module_example CXX)

# Set the version of C++ for the project
set(CMAKE_CXX_STANDARD 20)

# Create a library
add_library(foo)
# Add the module file to the library
target_sources(foo
  PUBLIC
    FILE_SET CXX_MODULES FILES
      a.cpp
      b.cpp
      b.impl.cpp
      my-module.cpp
)

# Create an executable
add_executable(hello main.cpp)

# Link to the library foo
target_link_libraries(hello foo)