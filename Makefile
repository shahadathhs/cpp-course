# Compiler
CXX = g++
CXXFLAGS = -std=c++23 -Wall

# Default target: compile and run main.cpp
all: execute

# Compile main.cpp
compile: 
	@mkdir -p tmp
	$(CXX) $(CXXFLAGS) main.cpp -o tmp/main

# Run the compiled program and show execution time
execute: compile
	@echo "Running program with execution time:"
	@/usr/bin/time -f "⏱  Elapsed time: %E (user: %U, sys: %S)" ./tmp/main

# Clean binaries
clean:
	rm -rf tmp
