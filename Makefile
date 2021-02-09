CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: main

clean:
	rm test.o test2.o main

main: test.o test2.o
	$(CXX) $(CXXFLAGS) test.o test2.o -o main

test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp

test2.o: test2.cpp
	$(CXX) $(CXXFLAGS) -c test2.cpp
