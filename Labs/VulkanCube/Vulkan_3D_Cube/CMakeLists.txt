cmake_minimum_required(VERSION 3.10)
project(Vulkan3DCube)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Vulkan REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

add_executable(Vulkan3DCube main.cpp)
target_link_libraries(Vulkan3DCube Vulkan::Vulkan glfw glm::glm)
