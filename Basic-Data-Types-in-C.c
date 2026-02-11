#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
       int a;
       long ln;
       char ch;
       float f;
       double d;
    
    scanf("%d %ld %c %f %lf",&a,&ln,&ch,&f,&d);
  printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",a,ln,ch,f,d);
    
    
    return 0;
}
