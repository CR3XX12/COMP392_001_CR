cmake_minimum_required(VERSION 3.10)
project(VulkanHelloWorld)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
find_package(Vulkan REQUIRED)
add_executable(VulkanHelloWorld main.cpp)
target_link_libraries(VulkanHelloWorld Vulkan::Vulkan)