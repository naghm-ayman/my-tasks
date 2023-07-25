#include<stdio.h>

void main(void){

   int number,result;

    printf("enter the number u want to check\n");
     scanf("%d",&number);

    result= number&1;
      printf("the LSB of %d = %d",number,result);





}
