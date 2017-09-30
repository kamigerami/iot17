/*******************************************************************************
 * * File Name: main.c
 * * Description: Breadboard 30 rows 10 columns
 * * Author: Kami Gerami
 * *
 * ******************************************************************************/

/*
 *
 * 1. Vad (komponenter) vill du placera ut?
 * 2. Vart vill du placera ut de?
 * 3. Visa lediga platser.
 * 4. Ange position kordinater
 * 5. Hur bred är din komponent?
 * 6. Skriv ut breadboard.
 *
 */
#include <stdio.h>
#include "menu.h"


int main(int argc, char *argv[])
{
    printMenuHeader("Welcome to BreadBoard Simulator");
    showMenu();
    return 0;
}
