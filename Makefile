CXX = g++
CFLAGS = -c -I Coursework/SFML-2.5.0/include -std=c++11
FLAGS =  -LCoursework/SFML-2.5.0/lib -lsfml-graphics -lsfml-window -lsfml-system

OBJECTS = build/main.o

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog: $(OBJECTS) 
	$(CXX) $(OBJECTS) -o bin/prog $(FLAGS)

build/main.o: src/main.cpp 
	$(CXX) $(CFLAGS) src/main.cpp -o build/main.o

build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog
