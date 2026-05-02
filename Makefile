CXX      := g++
CXXFLAGS := -Iinclude -Wall -std=c++17
BUILD_DIR := build
SRC_DIR   := src

TARGET := $(BUILD_DIR)/ejecutable_flipo
SRCS   := $(SRC_DIR)/main.cpp $(SRC_DIR)/flipo.cpp
OBJS   := $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

all: $(TARGET)


run: all
	@echo "--- Iniciando Software Flipo ---"
	@./$(TARGET)


$(TARGET): $(OBJS) | $(BUILD_DIR)
	$(CXX) $(OBJS) -o $(TARGET)


$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@


$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean run