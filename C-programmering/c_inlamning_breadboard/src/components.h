#ifndef COMPONENTS_H
#define COMPONENTS_H

typedef struct {
    char name[20];
    int width;
    int row_pos;
    int col_pos;
} Component;


Component component;

// pick components
void pickComponents();

//  make component
Component makeComponents(char name[], int width);

// insert components into breadboard
Component insertComponents(int row_pos, int col_pos);

// remove the component from the breadboard
void removeComponents();

// print the component values
Component printComponentValues(char name[], int width, int row_pos, int col_pos);

// width of component
void askWidth();

// set position of component
void askPosition();


// LED
void led();

// Resistor
void resistor();

// Jump Wires
void jumperWires();

#endif
