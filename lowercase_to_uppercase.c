#include <stdio.h>
int main() {
    char charLower;
     scanf("%c", &charLower);
    char charUpper=charLower-32;
    printf("The uppercase of %c is %c", charLower,charUpper);
    return 0;
}