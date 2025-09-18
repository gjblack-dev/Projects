# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -g
TARGET = myshell

# Source files and object files
SOURCES = myshell.cpp param.cpp
OBJECTS = myshell.o param.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

%.o: %.cpp param.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
