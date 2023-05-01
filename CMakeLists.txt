cmake_minimum_required(VERSION 3.0.0)
project(helloworld VERSION 0.1.0)


INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src)

AUX_SOURCE_DIRECTORY(src SRCS)

add_executable(helloworld sample/main.cpp ${SRCS})
target_link_libraries(helloworld)