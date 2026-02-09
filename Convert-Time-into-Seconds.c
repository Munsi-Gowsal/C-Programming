#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int toSeconds(int hours, int minutes, int seconds){
   return 3600*hours+60*minutes+seconds;
}
int main() {
        int hours,minutes,seconds;
    scanf("%d %d %d",&hours,&minutes,&seconds);
    int res=toSeconds(hours,minutes,seconds);
    printf("Total seconds: %d",res);
    return 0;
}
