# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17 -Iinclude

# Static linking option (set to 1 for static, 0 for dynamic) (I guess this won't work on MacOS)
STATIC_LINKING := 0

# LDFLAGS (adjust for static or dynamic linking)
ifeq ($(STATIC_LINKING), 1)
    # Static Linking: Link against static libraries
    LDFLAGS := -L/usr/local/lib -L/usr/lib -static
else
    # Dynamic Linking: Link against shared libraries
    LDFLAGS := -L/usr/local/lib -L/usr/lib
endif

# Directories
SRC_DIR := src
BUILD_DIR := build

# Source files
SRCS := main.cpp $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRCS:%.cpp=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

# Output executable
TARGET := game

# Default rule: build the target
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJS)
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
