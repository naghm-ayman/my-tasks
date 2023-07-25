#include<stdio.h>

// the program is to check the number even or odd

void main(void){

   int number;

    printf("enter the number u want to check\n");
     scanf("%d",&number);

   (number&1)? printf("%d is odd number",number): printf("%d is even number", number);






}
