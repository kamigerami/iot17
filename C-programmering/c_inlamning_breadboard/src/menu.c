/*
 *  function definitions and global variable
 *  definitions and initializations in the .c file
 */

#include "menu.h"
#include "breadboard.h"
#include "components.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showMenu()
{
  char board[ROWS][COLUMNS] = {{0}};
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
                printMenuHeader("Display BreadBoard Menu");
                displayBreadBoard(board);
                break;
            case 2:
                printMenuHeader("Pick and add Component Menu");
                pickComponents();
                break;
            case 3:
                printMenuHeader("Remove BreadBoard Menu");
                removeComponents();
                break;
            case 4:
                printMenuHeader("Reset the BreadBoard Menu");
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

void printMenuHeader(char title[]) {

    //char *ptr = "Hello";
    //printf("%40s\n", ptr);


    system("clear");
    printf("\n");
    for (int i = 0; i <= strlen(title)+3; i++) {
        putchar('*');
    }
    printf("\n");

    printf ( "* %*s *\n", (int)strlen(title), title );

    for (int i = 0; i <= strlen(title)+3; i++) {
        putchar('*');
    }
    printf("\n");
}
