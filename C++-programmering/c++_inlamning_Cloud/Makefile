CFLAGS = -std=c++11

SRC=$(wildcard src/*.cpp src/*.hpp)

cloud: $(SRC)
	g++ $(SRC) $(CFLAGS) 

clean: $(SRC)
	rm -vf *.out *.gch
