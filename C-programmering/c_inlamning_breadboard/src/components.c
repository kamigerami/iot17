#include "components.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>

void pickComponents() {
    int choice = 0;
    do
    {
        printf("\n");
        printf("Pick a omponent to use:\n");
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
                system("clear");
                printf("LED MENU\n");
                break;
            case 2:
                system("clear");
                printf("220 OHM MENU\n");
                break;
            case 3:
                system("clear");
                printf("Jumper Wire\n");
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

void insertComponents() {
    printf("insertComponents menu\n");
    return;
}


void removeComponents() {
    printf("removeComponents menu\n");
    return;
}
