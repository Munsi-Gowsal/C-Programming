
#include <stdio.h>
  float discountedAmount(float price, float percent){
float discountedAmount=(price* percent)/100;
return price-discountedAmount;
  }
int main(){
    float  price, percent;
    scanf("%f %f" , &price,&percent);
    float res= discountedAmount( price, percent);
    printf("The final price is: %f" ,res);
   
    return 0;
}
