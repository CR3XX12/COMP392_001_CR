# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wno-unused-variable

# Paths
VULKAN_SDK = C:/VulkanSDK/1.4.304.1
GLFW_PATH = C:/Users/crexa/Documents/Libraries/glfw-3.4.bin.WIN64/glfw-3.4.bin.WIN64
GLM_PATH = C:/Libraries/glm

# Include & Library Directories
INCLUDE_DIRS = -I$(VULKAN_SDK)/Include -I$(GLFW_PATH)/include -I$(GLM_PATH)
LIB_DIRS = -L$(VULKAN_SDK)/Lib -L$(GLFW_PATH)/lib-mingw-w64

# Libraries
LIBS = -lglfw3 -lvulkan-1 -lgdi32 -luser32 -lkernel32 -lopengl32

# Target
TARGET = VulkanApp

# Automatically find all .cpp files in the current directory
SRCS = $(wildcard *.cpp)

# Build rule
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDE_DIRS) $(SRCS) -o $(TARGET).exe $(LIB_DIRS) $(LIBS)

# Clean rule
clean:
	rm -f $(TARGET).exe
