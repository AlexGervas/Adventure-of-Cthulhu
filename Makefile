CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
.PHONY: all clean
 
OBJECTS = build/menu.o build/Drawchtul.o build/cleaning.o build/gun.o  build/knight.o build/Peasant.o build/stone.o build/moveenemy.o build/inttostr.o build/cthulhu.o build/kek.o 

all: bin build bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog -lgraph

build/menu.o: src/menu.c libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/menu.c -o build/menu.o -lgraph

build/Drawchtul.o: src/Drawchtul.c src/Drawchtul.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/Drawchtul.c -o build/Drawchtul.o -lgraph

build/cleaning.o: src/cleaning.c src/cleaning.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/cleaning.c -o build/cleaning.o -lgraph

build/gun.o: src/gun.c src/gun.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/gun.c -o build/gun.o -lgraph

build/knight.o: src/knight.c src/knight.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/knight.c -o build/knight.o -lgraph

build/Peasant.o: src/Peasant.c src/Peasant.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/Peasant.c -o build/Peasant.o -lgraph

build/stone.o: src/stone.c src/stone.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/stone.c -o build/stone.o -lgraph

build/moveenemy.o: src/moveenemy.c src/moveenemy.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/moveenemy.c -o build/moveenemy.o -lgraph

build/inttostr.o: src/inttostr.c src/inttostr.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/inttostr.c -o build/inttostr.o -lgraph

build/cthulhu.o: src/cthulhu.c src/cthulhu.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/cthulhu.c -o build/cthulhu.o -lgraph

build/kek.o: src/kek.c src/kek.h libgraph-1.0.2/graphics.h
	$(CXX) $(CFLAGS) src/kek.c -o build/kek.o -lgraph

build:
	mkdir build
bin:
	mkdir bin 
clean:
	rm build/*.o
	rm bin/*



