/*
 *  function definitions and global variable
 *  definitions and initializations in the .c file
 */

#include "menu.h"
#include "breadboard.h"
#include <stdio.h>
#include <stdlib.h>

void showMenu()
{
  int int_choice = 0;
  char choice[2];
  do
    {
        printf("\n");
        printf("1. Display breadboard\n");
        printf("2. Display and pick available components\n");
        printf("3. Insert components on breadboard\n");
        printf("4. Exit\n");

        scanf("%s", choice);

        int_choice = atoi(choice);

        switch (int_choice)
        {
            case 1:
                displayBreadBoard();
                break;
            case 2:
                printf("case 2");
                break;
            case 3:
                printf("case 3");
                break;
            case 4:
                printf("exiting\n");
                exit(EXIT_SUCCESS);
                break;
            default:printf("Wrong choice. Enter Again");
                break;
        }
    }while(int_choice !=99999);
}
