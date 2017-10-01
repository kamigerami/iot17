#include "breadboard.h"
#include <stdio.h>

void displayBreadBoard(char board[ROWS][COLUMNS])
{
    int rows, columns;
    
    // print top A-J COLUMN
    char *ptr = "";
    printf("%4s", ptr);

    for ( char alpha = 'A'; alpha <= 'J' ; alpha++) {
        printf("%c ", alpha);
    }
    printf("\n");

    for ( rows = 0 ; rows < ROWS ; rows++ )
        {
            // print ROW number to the LEFT side
            printf("%.2d ", rows+1);
            for ( columns = 0 ; columns < COLUMNS ; columns++ )
            {
                if(board[rows][columns]){
                    printf( "|%c", board[rows][columns] );
                }else{
                    printf("|x"); 
                }
            }
            printf("|\n");
        }
        return;
}

void resetBreadBoard()
{
    printf("Clearing the breadboard...\n");
    return;
}
