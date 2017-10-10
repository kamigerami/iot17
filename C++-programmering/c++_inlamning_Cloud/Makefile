CFLAGS = -std=c++11 -stdlib=libc++

SRC=$(wildcard src/*.cpp)

all: $(SRC)
	g++ $(SRC) $(CFLAGS) 

clean: $(SRC)
	rm -vf *.out src/*.gch
