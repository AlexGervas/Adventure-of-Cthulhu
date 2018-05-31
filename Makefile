CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
.PHONY: all clean
 
OBJECTS = build/kek.o build/Drawchtul.o build/cleaning.o build/gun.o  build/knight.o build/Peasant.o build/enemy3.o build/moveenemy.o build/inttostr.o build/cthulhu.o build/menu.o 

all: bin build bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog -lgraph

build/kek.o: src/kek.c src/graphics.h
	$(CXX) $(CFLAGS) src/kek.c -o build/kek.o -lgraph

build/Drawchtul.o: src/Drawchtul.c src/Drawchtul.h src/graphics.h
	$(CXX) $(CFLAGS) src/Drawchtul.c -o build/Drawchtul.o -lgraph

build/cleaning.o: src/cleaning.c src/cleaning.h src/graphics.h
	$(CXX) $(CFLAGS) src/cleaning.c -o build/cleaning.o -lgraph

build/gun.o: src/gun.c src/gun.h src/graphics.h
	$(CXX) $(CFLAGS) src/gun.c -o build/gun.o -lgraph

build/knight.o: src/knight.c src/knight.h src/graphics.h
	$(CXX) $(CFLAGS) src/knight.c -o build/knight.o -lgraph

build/Peasant.o: src/Peasant.c src/Peasant.h src/graphics.h
	$(CXX) $(CFLAGS) src/Peasant.c -o build/Peasant.o -lgraph

build/enemy3.o: src/enemy3.c src/enemy3.h src/graphics.h
	$(CXX) $(CFLAGS) src/enemy3.c -o build/enemy3.o -lgraph

build/moveenemy.o: src/moveenemy.c src/moveenemy.h src/graphics.h
	$(CXX) $(CFLAGS) src/moveenemy.c -o build/moveenemy.o -lgraph

build/inttostr.o: src/inttostr.c src/inttostr.h src/graphics.h
	$(CXX) $(CFLAGS) src/inttostr.c -o build/inttostr.o -lgraph

build/cthulhu.o: src/cthulhu.c src/cthulhu.h src/graphics.h
	$(CXX) $(CFLAGS) src/cthulhu.c -o build/cthulhu.o -lgraph

build/menu.o: src/menu.c src/menu.h src/graphics.h
	$(CXX) $(CFLAGS) src/menu.c -o build/menu.o -lgraph

build:
	mkdir build
bin:
	mkdir bin 
clean:
	rm build/*.o
	rm bin/*



