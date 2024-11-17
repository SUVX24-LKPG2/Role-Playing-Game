# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17 -Iinclude

# Directories
SRC_DIR := src
BUILD_DIR := build
INCLUDE_DIR := include

# Source files and object files
SRCS := main.cpp $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRCS:%.cpp=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

# Output executable
TARGET := game

# Default rule
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files into object files
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

# Include dependency files
-include $(DEPS)

# Clean build files
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Phony targets
.PHONY: all clean