CXX      := g++
CXXFLAGS := -Iinclude -Wall -std=c++17
BUILD_DIR := build
SRC_DIR   := src

TARGET := $(BUILD_DIR)/ejecutable_flipo.exe
SRCS   := $(SRC_DIR)/main.cpp $(SRC_DIR)/flipo.cpp
OBJS   := $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

all: $(TARGET)

run: all
	@echo "--- Iniciando Software Flipo ---"
	@./$(TARGET)
	@echo "--- Ejecucion finalizada. Limpiando archivos... ---"
	$(MAKE) clean

$(TARGET): $(OBJS) | $(BUILD_DIR)
	$(CXX) $(OBJS) -o $(TARGET)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	@if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)

clean:
	@if exist $(BUILD_DIR) rd /s /q $(BUILD_DIR)
	@echo "--- Carpeta build eliminada ---"

.PHONY: all clean run