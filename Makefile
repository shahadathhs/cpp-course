# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Default target: compile and run main.cpp
all: execute

# Compile main.cpp
compile: 
	@mkdir -p tmp
	$(CXX) $(CXXFLAGS) main.cpp -o tmp/main

# Run the compiled program
execute: compile
	./tmp/main

# Clean binaries
clean:
	rm -rf tmp
