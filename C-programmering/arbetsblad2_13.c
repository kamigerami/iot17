#include <stdio.h>
/*
 * 13. Till denna uppgift beh¨over du ladda ner Tatoeba.sv fr˚an studentportalen,
 * l¨asa in den och skriva ut rader enligt displayens begr¨ansningar.
 * Du har f˚att i uppgift att anpassa texter till en Arduino-display. Displayen
 * ¨ar f¨orst˚as begr¨ansad i den lilla enheten, specifikt best˚ar den av 2 rader
 * med 16 tecken p˚a vardera rad.
 * Skriv ett program som skriver ut meningarna p˚a displayen. Du ska dela
 * upp meningarna s˚a att de passar enhetens display.
 * (a) Vilka antaganden g¨or du om texten?
 * (b) Vilka funktioner beh¨over du anv¨anda?
 * Spara utdata till en fil och l¨amna in den i studentportalen.
 *
 * OBS - ingen error hantering eller argv input.
*/

int main() {
  int c;
  FILE *file;
  char filedata[50];
  file = fopen("Tatoeba.sv", "r");
  if (file) {
    while( fgets ( filedata, 50, file ) != NULL )
      printf( "%-16s\n" , filedata ) ;
    fclose(file) ;
    return 0;
  }
}
