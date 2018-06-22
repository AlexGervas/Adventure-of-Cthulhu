CXX = g++
CFLAGS = -c -std=c++11 
FLAGS =  -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

OBJECTS = build/main.o
OB = build/main_test.o 

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog test

test: bin/prog_test
	bin/prog_test

bin/prog: $(OBJECTS) 
	$(CXX) $(OBJECTS) -o bin/prog $(FLAGS) 

build/main.o: src/main.cpp src/main.h
	$(CXX) $(CFLAGS) src/main.cpp -o build/main.o 

bin/prog_test: $(OB) 
	$(CXX) $(OB) -o bin/prog_test $(FLAGS)

build/main_test.o: thirdparty/boost_1_60_0/boost/test/unit_test.hpp
	$(CXX) $(CFLAGS) -I thirdparty/boost_1_60_0/boost/test -I src -c test/main.cpp -o build/main_test.o

build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog bin/prog_test
