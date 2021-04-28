cmake_minimum_required(VERSION 3.10.2)

# set the project name
project(Pendu)

include_directories(include)

set(SOURCES src/func.c
                       src/pendu.c)

# add the executable
add_executable(pendu
                       ${SOURCES})
