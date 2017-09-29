CFLAGS = -Wall

SRC=$(wildcard src/*.c)

breadboard: $(SRC)
	gcc -o $@ $^ $(CFLAGS) 

clean: $(SRC)
	rm -vf $(SRC)
