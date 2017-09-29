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
        printf("2. Pick available components\n");
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
                availableComponents();
                break;
            case 3:
                insertComponents();
                break;
            case 4:
                printf("exiting\n");
                exit(EXIT_SUCCESS);
                break;
            default:printf("Wrong choice. Enter Again");
                break;
        }
    //}while(int_choice !=99999);
    }while(1);
}

void availableComponents()
{
  printf("available components submenu");
}

void insertComponents()
{
    printf("insert components submenu");
}
