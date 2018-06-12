CXX = g++
CFLAGS = -c -std=c++11 
FLAGS =  -lsfml-graphics -lsfml-window -lsfml-system 

OBJECTS = build/main.o

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog: $(OBJECTS) 
	$(CXX) -I SFML-2.5.0/lib $(OBJECTS) -o bin/prog $(FLAGS) 

build/main.o: src/main.cpp 
	$(CXX) -I 2/SFML-2.5.0/include $(CFLAGS) src/main.cpp -o build/main.o 

build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog
