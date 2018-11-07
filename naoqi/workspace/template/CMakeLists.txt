cmake_minimum_required(VERSION 2.8)
project(template)

find_package(qibuild)

# Create a executable named template
# with the source file: main.cpp
qi_create_bin(template "main.cpp")

# Add a simple test:
qi_create_test(test_template "test.cpp")
