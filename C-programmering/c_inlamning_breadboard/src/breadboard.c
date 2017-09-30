#include "breadboard.h"
#include <stdio.h>

void displayBreadBoard()
{
   char grid[ROWS][COLUMS];
    int r,c;
    int row = ROWS;
    int col = COLUMS;

    // top colums A-J (10 columns)
    printf("00 A B C D E F G H I J\n");

    for (r = 0; r < row; r++) {
        // left hand side ROWS 1-30 (30 ROWS)
        printf("%.2d ", r+1);
        for (c = 0; c < col; c++) {
            grid[r][c] = 'x';
            printf("%c ", grid[r][c]);
        }
        printf("\n");
    }
}


void resetBreadBoard()
{
    printf("Clearing the breadboard...\n");
    return;
}
