#ifndef BREADBOARD_H
#define BREADBOARD_H
#endif

#ifndef COLUMNS
#define COLUMNS 10
#endif

#ifndef ROWS
#define ROWS 30
#endif

struct breadboard {
    char board[ROWS][COLUMNS];
} breadboard;


// display the breadboard
void displayBreadBoard(char board[ROWS][COLUMNS]);

// reset breadboard
void resetBreadBoard();


