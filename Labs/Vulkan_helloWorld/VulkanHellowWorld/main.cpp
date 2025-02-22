#include <vulkan/vulkan.h>
#include <iostream>
int main() {
VkInstance instance;
VkApplicationInfo appInfo{};
appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
appInfo.pApplicationName = "Hello Vulkan";
appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
appInfo.pEngineName = "No Engine";
appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
appInfo.apiVersion = VK_API_VERSION_1_0;
VkInstanceCreateInfo createInfo{};
createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
createInfo.pApplicationInfo = &appInfo;
if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
std::cerr << "Failed to create Vulkan instance!" << std::endl;
return -1;
}
std::cout << "Vulkan Instance Created Successfully!" << std::endl;
vkDestroyInstance(instance, nullptr);
return 0;
}