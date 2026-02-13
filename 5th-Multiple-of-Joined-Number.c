#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d){
     int res=(1000*a+100*b+10*c+1*d)*5;
    return res;
}
int main() {
      int a,b,c,d;
      scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
     int x=buildNumber(a,b,c,d);
    printf("The number is: %d",x);
    
    return 0;
}
