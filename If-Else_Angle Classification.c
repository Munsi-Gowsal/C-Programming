#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==0)
    {printf("Acute Angle");}
    else if(n%360>0 && n%360<90)
        {printf("Acute Angle");}
    else if(n%360==90)
    {printf("Right Angle");}
    else if(n%360>90 && n%360<180)
        {printf("Obtuse Angle");}
    else if(n%360==180)
        {printf("Straight Angle");}
    else if(n%360>180 && n%360<360)
        {printf("Reflex Angle");}
    else if(n%360==0)
        {printf("Full Rotation");}
          
    return 0;
}