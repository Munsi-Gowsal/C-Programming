#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        char char1,char2;
       scanf("%c",&char1);
       scanf(" %c",&char2);
     char res=127-char1;
    char res1=127-char2;
    
     int res2= res-res1;
         printf("The distance between %c and %c is %d",char1,char2,res2);
      
    return 0;
}
