# BreadBoard Simulator
A Breadboard simulator written in C

### Table of Content
1. [About](#about)
2. [Requirements](#requirements)
3. [Thoughts](#thoughts)
4. [Compilation](#compilation)

### About
* This program will simulate a breadboard with 30 rows and 10 columns.
* You'll be able to place components on to the breadboard and print it on
to your screen (stdout).
* The user will input coordinates on the breadboard for where the components
should be placed.

### Requirements
* Use a datatype for the breadboard.
* Use different component types.
* Allow user to place component on to the board.
* Allow user to remove a component from the board.
* User should be able to print the current state of the board.
* Allow user to pick the size of space the component will take on the board.
* Use pointers where possible.
* Use header files and separate declarations and definitions.
* Use best practices.

### Thoughts
I started with the main menu implementation and then
created each of the functions such as creating the breadboard, reset, input
component functions etc..

I separated everything into it's own .h and .c files. 

I modified and rewrote the code a few times.

Still need to : 

* Input validation and error checking ( out of bounds, wrong input type, too many charachters... etc)
* Dynamic allocation of the matrix ( change size of breadboard )
* User adding new components
* better use of pointers and functions etc...
* better Menu's
* better use of struct / typedef
* Add color to components

### Compilation
To compile project in linux / osx run : 
```
# compile using gcc: 

$ gcc -Wall -o breadboard.out src/*.c

# compile using make: 

$ make
gcc -o breadboard.out src/breadboard.c src/main.c src/menu.c -Wall

# to run the compiled program :

$ ./breadboard.out 

# cleanup : 

$ make clean
rm -vf *.out
breadboard.out
```
