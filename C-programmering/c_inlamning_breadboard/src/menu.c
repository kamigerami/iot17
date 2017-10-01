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
  char *header;
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
                header = "Display BreadBoard Menu";
                printMenuHeader(header);
                displayBreadBoard(board);
                break;
            case 2:
                header = "Pick and add Component Menu";
                printMenuHeader(header);
                pickComponents();
                break;
            case 3:
                header = "Remove BreadBoard Menu";
                printMenuHeader(header);
                removeComponents();
                break;
            case 4:
                header = "Reset the BreadBoard Menu";
                printMenuHeader(header);
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

void printMenuHeader(char header[]) {

    //char *ptr = "Hello";
    //printf("%40s\n", ptr);

    system("clear");
    printf ( "%.35s\n", "*******************************************************");
    printf ("* %30s *\n", header );
    printf ( "%.35s\n", "*******************************************************");
}
