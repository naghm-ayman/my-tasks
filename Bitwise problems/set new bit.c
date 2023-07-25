#include<stdio.h>

// the program is to change the situation of the bit in the nth number

void main(void){

   int number,nth,situation;

    printf("enter the number u want to check\n");
     scanf("%d",&number);


    printf("enter the order of the bit want to replace\n");
     scanf("%d",&nth);

     situation=(1 << nth) | number ;

     printf("the old number %d\n",number);
     printf("the new num %d",situation);


}


