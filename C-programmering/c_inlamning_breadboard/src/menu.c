/*
 *  function definitions and global variable
 *  definitions and initializations in the .c file
 */

#include "menu.h"
#include "breadboard.h"
#include "components.h"
#include <stdio.h>
#include <stdlib.h>

void showMenu()
{
  int choice = 0;
  do
    {

        printf("\n");
        printf("1. Display breadboard\n");
        printf("2. Pick and add a component to the breadboard\n");
        printf("3. Remove components from breadboard\n");
        printf("4. Reset the breadboard\n");
        printf("5. Exit\n");

        fflush(stdout);

        scanf("%d", &choice);

        getchar();

        switch (choice)
        {
            case 1:
                system("clear");
                displayBreadBoard();
                break;
            case 2:
                system("clear");
                pickComponents();
                break;
            case 3:
                system("clear");
                removeComponents();
                break;
            case 4:
                system("clear");
                resetBreadBoard();
                break;
            case 5:
                printf("exiting\n");
                exit(EXIT_SUCCESS);
                break;
            default:
                system("clear");
                printf("Wrong choice. Enter Again");
                break;
        }

    }while(choice != 5);
}

