# myapp/CmakeLists.txt
cmake_minimum_required(VERSION 3.20.0)

# make a project
project(myapp)
# this will generate a myapp soluion for VisualStudio
# containing all involved projects.

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# have access to all headers
include_directories(.)

# add sub-folders which have to be considered
add_subdirectory(myapp/main)
add_subdirectory(myapp/gui)
add_subdirectory(myapp/model)