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
                askQuestions('L');
                break;
            case 2:
                askQuestions('R');
                break;
            case 3:
                askQuestions('J');
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


void removeComponents() {
    printf("which component do you want to remove?: \n");
    return;
}


void askQuestions(char value) {

    int row_pos = 0;
    int col_pos = 0;
    char board[ROWS][COLUMNS] = {{0}};

    printf("Enter row number: ");
    scanf("%d", &row_pos);        
    printf("Enter Column number: ");
    scanf("%d", &col_pos);
     
    system("clear");
    printf("you entered:\nComponent - %c \nRow number - %d \nColumn number - %d\n\n", value, row_pos, col_pos);
         board[row_pos-1][col_pos-1] = value;
         displayBreadBoard(board);

}
