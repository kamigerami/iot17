#include "colors.h"
#include "breadboard.h"
#include <stdio.h>
#include <string.h>

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
                    if(board[rows][columns] == 'L') {
                      printf( " | %s%c%s", RED, board[rows][columns], RESET );
                    } else if (board[rows][columns] == 'R') {
                      printf( " | %s%c%s", GREEN, board[rows][columns], RESET );
                    } else if (board[rows][columns] == 'J') {
                      printf( " | %s%c%s", BLUE, board[rows][columns], RESET );
                    }
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

    int rows, columns;

    printf("Clearing the breadboard...\n");
    for ( rows = 0 ; rows < ROWS ; rows++ )
    {
        for ( columns = 0 ; columns < COLUMNS ; columns++ )
        {
            board[rows][columns] = '\0';
        }
    }
    displayBreadBoard(board);
    return;
}
