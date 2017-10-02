#include "breadboard.h"
#include <stdio.h>

char board[ROWS][COLUMNS] = {{0}};

void displayBreadBoard(char board[ROWS][COLUMNS])
{
    int rows, columns;
    

    // padding
    putchar('0'); putchar('0'); putchar(' '); putchar(' ');

    // print top 1-10 COLUMN
    for ( int i = 1; i <= COLUMNS ; i++) {
        printf("%4.2d", i);
    }
    printf("\n");

    for ( rows = 0 ; rows < ROWS ; rows++ )
        {
            // print ROW 1-30 on the LEFT side
            printf("%.2d ", rows+1);
            for ( columns = 0 ; columns < COLUMNS ; columns++ )
            {
                if(board[rows][columns]){
                    printf( " | %c", board[rows][columns] );
                }else{
                    printf(" | x"); 
                }

            }

            printf(" |\n");
        }
        return;
}

void resetBreadBoard()
{
    printf("Clearing the breadboard...\n");
    return;
}
