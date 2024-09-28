# firstCfile: main_lab4.cpp printinfo.cpp factorial.cpp
# 	g++ -o firstCfile main_lab4.cpp printinfo.cpp factorial.cpp

# CXX = g++
# TARGET = firstCfile
# OBJ = main_lab4.o printinfo.o factorial.o 
# $(TARGET) : $(OBJ)
# 	$(CXX) -o $(TARGET) $(OBJ)

SRC_DIR = ./src
INCLUDE_DIR = ./inc
SOURCE = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(SRC_DIR)/%.o, $(SOURCE))
TARGET = firstCfile
INCLUDE = -I$(INCLUDE_DIR)

CXX = g++
CFLAGES = -c -Wall
CXXFLAGES = $(CFLAGES) -O3

$(TARGET) : $(OBJS)
	$(CXX) -o $@ $(OBJS)
%.o : %.cpp
	$(CXX) $(CXXFLAGES) $< -o $@ $(INCLUDE)

.PHONY :clean
clean:
	rm -f $(SRC_DIR)/*.o $(TARGET)

