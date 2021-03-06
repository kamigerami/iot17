#include "colors.h"
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
        printf("1. LED " RED "[L]\n" RESET);
        printf("2. 220-Ohm-Resistor" GREEN "[R]\n" RESET);
        printf("3. Jumper wires" BLUE "[J]\n" RESET);
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

    char value;
    int row_pos = 0;
    int col_pos = 0;
    int comp_width = 0;

    // need to fix all of the scanf and add better input validation
    // this is temporary because I don't have time
    displayBreadBoard(board);
    printf("\nwhich component do you want to remove? "RED "[L]" GREEN "[R]" BLUE "[J]"RESET": \n");
    scanf("%c", &value);
    printf("Enter row (1-30): ");
    scanf("%d", &row_pos);
    printf("Enter column (1-10): ");
    scanf("%d", &col_pos);
    printf("Enter width: ");
    scanf("%d", &comp_width);

    if(board[row_pos-1][col_pos-1] == value ) {
        for ( int i = 0; i < comp_width; i++) {
            board[row_pos-1][col_pos-1+i] = '\0';
        }
    } else {
        printf("no such component [%c] in position [%d,%d] with width of %d... try again\n", value, row_pos, col_pos, comp_width);
    }
    displayBreadBoard(board);
    return;
}


void askQuestions(char value) {

    int row_pos = 0;
    int col_pos = 0;
    int comp_width = 0;


    printf("Enter row (1-30): ");
    scanf("%d", &row_pos);
    printf("Enter column (1-10): ");
    scanf("%d", &col_pos);
    printf("Enter width: ");
    scanf("%d", &comp_width);

    system("clear");
    printf("\nYou entered:\nComponent - %c \nRow number - %d \nColumn number - %d\nComponent Width - %d\n\n", value, row_pos, col_pos, comp_width);
    if ((col_pos + comp_width) > COLUMNS) {
        printf("can't place a component there (out of bounds)...try again\n");
        pickComponents();
    }
    if (board[row_pos-1][col_pos-1] != 0 || board[row_pos-1][col_pos-1+comp_width-1] != 0) {
        printf("space is already occupied...try again\n");
        pickComponents();
    }
    for ( int i = 0; i < comp_width; i++) {
        board[row_pos-1][col_pos-1+i] = value;
    }
    displayBreadBoard(board);
}
