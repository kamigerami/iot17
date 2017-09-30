#include "components.h"
#include "menu.h"
#include "breadboard.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pickComponents() {

    int choice = 0;

    do
    {
        printf("\n");
        printf("Pick a component to use:\n");
        printf("1. LED [L]\n");
        printf("2. 220-Ohm-Resistor [R]\n");
        printf("3. Jumper wires [J]\n");
        printf("4. Back to main menu\n");

        fflush(stdout);

        scanf("%d", &choice);

        getchar();

        switch (choice)
        {
            case 1:
                led();
                break;
            case 2:
                resistor();
                break;
            case 3:
                jumperWires();
                break;
            case 4:
                system("clear");
                printf("back to menu\n");
                showMenu();
                break;
            default:
                system("clear");
                printf("Wrong choice. Enter Again");
                break;
        }

    }while(choice != 4);

    return;
}


Component insertComponents(int row_pos, int col_pos) {
    component.row_pos = row_pos;
    component.col_pos = col_pos;
    return component;
}


void removeComponents() {
    printf("which component do you want to remove?: \n");
    return;
}


Component makeComponents(char name[], int width) {
    strcpy(component.name, name);
    component.width = width;
    return component;
}

Component printComponentValues(char name[], int width, int row_pos, int col_pos) {
    strcpy(component.name, name);
    component.width = width;
    component.row_pos = row_pos;
    component.col_pos = col_pos;

    printf("Component values are: \n");
    printf("Name: %s\n", name);
    printf("Width: %d\n", width);
    printf("Row position: %d\n", row_pos);
    printf("Column position: %d\n", col_pos);
    return component;
}

void askWidth() {
    printf("How wide is your component, (2-8) : \n");
    scanf("%d", &component.width);
 
     if (component.width > 8 || component.width < 2) {
        printf("Only between 2-8 allowed!\n");
        printf("defaulting to MIN value size 2\n");
        component.col_pos = 2;
    }

    return;
}

void askPosition() {
    printf("insert component coordinates, row (1-30) : \n");
    scanf("%d", &component.row_pos);
    
    if (component.row_pos > 30 || component.row_pos < 1) {
        printf("Only between 1-30 allowed!\n");
        printf("defaulting to MAX value 30\n");
        component.row_pos = 30;
    }

    printf("insert component coordinates, col (1-10) : \n");
    
    scanf("%d", &component.col_pos);
    
     if (component.col_pos > 10 || component.col_pos < 1) {
        printf("Only between 1-10 allowed!\n");
        printf("defaulting to MAX value 10\n");
        component.col_pos = 10;
    }

    return;
}

Component runSubMenu(char menuTitle[], char name[]) {
    strcpy(component.name, name);
    strcpy(component.menuTitle, menuTitle);

    printMenuHeader(menuTitle);
    askWidth();
    makeComponents(name, component.width);
    askPosition();
    insertComponents(component.row_pos, component.col_pos);
    printComponentValues(name, component.width, component.row_pos, component.col_pos);
    return component;
}

// Menu Title, Component name
void led() {
    runSubMenu("Pick LED Menu", "LED");
}

// Menu Title, Component name
void resistor() {
    runSubMenu("Pick Resistor Menu", "Resistor");
}

// Menu Title, Component name
void jumperWires() {
    runSubMenu("Pick Jumper Wires Menu", "Jummper Wires");
}
