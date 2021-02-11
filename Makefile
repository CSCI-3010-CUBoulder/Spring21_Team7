CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: main

main: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o main
