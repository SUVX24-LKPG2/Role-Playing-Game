# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17 -Iinclude -Iftxui/include
LDFLAGS := -Lftxui/build -lftxui

# Directories
SRC_DIR := src
BUILD_DIR := build
FTXUI_BUILD_DIR := ftxui/build

# Source files
SRCS := main.cpp $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRCS:%.cpp=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

# Output executable
TARGET := game

# Default rule: build the target
all: $(TARGET)

# Build FTXUI
$(FTXUI_BUILD_DIR)/libftxui.a:
	mkdir -p $(FTXUI_BUILD_DIR)
	cd $(FTXUI_BUILD_DIR) && cmake .. -DCMAKE_BUILD_TYPE=Release
	cd $(FTXUI_BUILD_DIR) && make

# Link the executable
$(TARGET): $(OBJS) $(FTXUI_BUILD_DIR)/libftxui.a
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Compile source files into object files
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

# Include generated dependency files
-include $(DEPS)

# Clean build files
clean:
	rm -rf $(BUILD_DIR) $(TARGET)
	rm -rf $(FTXUI_BUILD_DIR)

.PHONY: all clean