# Nacka Cloud
A Nacka Cloud written in C

### Table of Content
1. [About](#about)
2. [Requirements](#requirements)
3. [Thoughts](#thoughts)
4. [Compilation](#compilation)

### About
* This program will simulate a cloud solution that displays information about connected IOT devices.
* You'll be able to add new units to the dashboard.
* The user will Display, Remove, Add and modify units on the dashboard.

### Requirements
* Use OOP.
* Use different classes.
* Allow user to add new units to the cloud solution.
* Allow user to remove units.
* User should be able to print the current state of the cloud.
* Allow user to modify (turn on and off) a unit.
* Use header files and separate declarations and definitions.
* Use classes and inheritance were possible.
* Use best practices.

### Thoughts
I started with the  provided UML diagram and created all of the
methods.

I set everything as public to start with in the first few commits.

I separated everything into it's own .hpp and .cpp files. 

I modified and rewrote the code a few times, added new methods and classes.

In the setId() method I create a random ID in the range of 1-100 and push it into a vector<int> and also check so the ID is available (not inside the vector already) using the std::find method.

I use a lot of vectors<string> and <int> to push_back information in to them when user adds new components.

The reason I chose a vector (instead of a list) is because of it using contiguous memory.


Still need to : 

* Input validation and error checking ( out of bounds, wrong input type, too many charachters... etc)
* User removing components
* better separation of private and public methods and variables.

### Compilation
To compile project in linux / osx run : 
```
# compile using g++: 

$ g++ src/*.[c,h]pp -std=c++11

# compile using make: 

$ make
g++ src/Cloud.cpp src/Dashboard.cpp src/Unit.cpp src/main.cpp src/Cloud.hpp src/Dashboard.hpp src/Unit.hpp -std=c++11


# to run the compiled program :

$ ./a.out 

# cleanup : 

$ make clean
rm -vf *.out *.gch
a.out
```
