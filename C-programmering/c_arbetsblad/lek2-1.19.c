#include <stdio.h>
#include <string.h>
void reverse(char s[20]) {

    int length = strlen(s);
    while(length >= 0) {
      printf("%c", s[length]);
      length = length-1;
    }
}
int main() {
   char name[20];
    printf("Skriv något\n");
    scanf("%s", name);
    reverse(name);
}


