#include<stdio.h>

// the program is to check the MSB of the number (the number either +ve or -ve)

void main(void){

   int number,result;

    printf("enter the number u want to check\n");
     scanf("%d",&number);

    if(number<0)
      printf("the MSB of %d = 1",number);
      else
        printf("the MSB of %d = 0",number);






}
