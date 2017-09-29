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
  int choice = 0;
  do
    {
        printf("\n");
        printf("1. Display breadboard\n");
        printf("2. Pick components\n");
        printf("3. Insert components on breadboard\n");
        printf("4. Reset the breadboard\n");
        printf("5. Exit\n");

        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                displayBreadBoard();
                break;
            case 2:
                pickComponents();
                break;
            case 3:
                insertComponents();
                break;
            case 4:
                resetBreadBoard();
                break;
            case 5:
                printf("exiting\n");
                exit(EXIT_SUCCESS);
                break;
            default:printf("Wrong choice. Enter Again");
                break;
        }
    //}while(int_choice !=99999);
    }while(choice != 5);
}
