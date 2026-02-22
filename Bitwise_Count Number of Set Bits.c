#include <stdio.h>

int main() {

    int a, count=0;
    scanf("%d" ,&a);
    
    int last=a&15;
    for(;last>0;)
    {
        count+=last&1;
        last >>=1;
    }
    printf("%d", count);
    return 0;
}