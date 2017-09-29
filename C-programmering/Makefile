CFLAGS = -Wall

SRC=$(wildcard src/*.c)

breadboard: $(SRC)
	gcc -o $@.out $^ $(CFLAGS) 

clean: $(SRC)
	rm -vf *.out
