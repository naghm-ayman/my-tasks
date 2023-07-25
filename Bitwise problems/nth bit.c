#include<stdio.h>

// the program is to check the situation of the bit in the nth number

void main(void){

   int number,nth,situation;

    printf("enter the number u want to check\n");
     scanf("%d",&number);


    printf("enter the order of the bit want to check\n");
     scanf("%d",&nth);

     situation=(number >> nth) & 1;

     printf("the %d bit in the number %d is %d",nth,number,situation);


}


