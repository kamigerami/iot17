#include "breadboard.h"
#include <stdio.h>

void displayBreadBoard()
{
   char grid[ROWS][COLUMS];
    int i,j;
    int row = ROWS;
    int col = COLUMS;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            grid[i][j] = 'x';
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}
