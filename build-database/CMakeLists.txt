cmake_minimum_required(VERSION 3.28)

set(CMAKE_CC_COMPILER /lib/llvm-22/bin/clang)
set(CMAKE_CXX_COMPILER /lib/llvm-22/bin/clang++)
set(CMAKE_CXX_COMPILER_CLANG_SCAN_DEPS /lib/llvm-22/bin/clang-scan-deps)
set(CMAKE_EXPERIMENTAL_EXPORT_BUILD_DATABASE 73194a1d-c0b5-41b9-9190-a4512925e192)
set(CMAKE_EXPORT_BUILD_DATABASE ON)

project(ModuleExample CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

# Create a library with modules
add_library(core STATIC)
target_compile_features(core PUBLIC cxx_std_20)
target_sources(core PUBLIC
	FILE_SET modules TYPE CXX_MODULES FILES
	module.cpp
	)

# Create an executable that consumes the module
add_executable(app main.cpp)
target_link_libraries(app PRIVATE core)

