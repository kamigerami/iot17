#ifndef BREADBOARD_H
#define BREADBOARD_H

#define COLUMNS 10
#define ROWS 30

extern char board[ROWS][COLUMNS];

// display the breadboard
void displayBreadBoard(char board[ROWS][COLUMNS]);

// reset breadboard
void resetBreadBoard();

#endif
