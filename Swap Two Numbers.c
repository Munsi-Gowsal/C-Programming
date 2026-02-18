 
#include <stdio.h>

int main()
{
   int a;
   int b;
   int num;
   scanf("%d %d" ,&a,&b);
   num = a;
   a = b;
   b = num;
   printf("a = %d\nb = %d\n" ,a,b);
    return 0;
}