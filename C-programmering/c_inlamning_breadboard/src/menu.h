/*
 * structure type, declarations, function prototypes, 
 * global variable and extern declarations
 */

#ifndef MENU_H
#define MENU_H

typedef struct {
    char title[20];
} Menu;

Menu menu;

// show the menu
void showMenu();

void printMenuHeader(char title[]);

#endif
