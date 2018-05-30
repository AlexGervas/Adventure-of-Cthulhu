CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
.PHONY: all clean
 
OBJECTS = build/kek.o build/Drawchtul.o build/cleaning.o build/gun.o  build/knight.o build/enemy2.o build/enemy3.o build/moveenemy.o build/inttostr.o build/cthulhu.o build/menu.o 

all: bin build bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog -lgraph

build/kek.o: src/kek.c
	$(CXX) $(CFLAGS) src/kek.c -o build/kek.o -lgraph

build/Drawchtul.o: src/Drawchtul.c src/Drawchtul.h
	$(CXX) $(CFLAGS) src/Drawchtul.c -o build/Drawchtul.o -lgraph

build/cleaning.o: src/cleaning.c src/cleaning.h
	$(CXX) $(CFLAGS) src/cleaning.c -o build/cleaning.o -lgraph

build/gun.o: src/gun.c src/gun.h
	$(CXX) $(CFLAGS) src/gun.c -o build/gun.o -lgraph

build/knight.o: src/knight.c src/knight.h
	$(CXX) $(CFLAGS) src/knight.c -o build/knight.o -lgraph

build/enemy2.o: src/enemy2.c src/enemy2.h
	$(CXX) $(CFLAGS) src/enemy2.c -o build/enemy2.o -lgraph

build/enemy3.o: src/enemy3.c src/enemy3.h
	$(CXX) $(CFLAGS) src/enemy3.c -o build/enemy3.o -lgraph

build/moveenemy.o: src/moveenemy.c src/moveenemy.h
	$(CXX) $(CFLAGS) src/moveenemy.c -o build/moveenemy.o -lgraph

build/inttostr.o: src/inttostr.c src/inttostr.h
	$(CXX) $(CFLAGS) src/inttostr.c -o build/inttostr.o -lgraph

build/cthulhu.o: src/cthulhu.c src/cthulhu.h
	$(CXX) $(CFLAGS) src/cthulhu.c -o build/cthulhu.o -lgraph

build/menu.o: src/menu.c src/menu.h
	$(CXX) $(CFLAGS) src/menu.c -o build/menu.o -lgraph

build:
	mkdir build
bin:
	mkdir bin 
clean:
	rm build/*.o
	rm bin/*



