#include<stdio.h>

// the program is to check the MSB of the number (the number either +ve or -ve)

void main(void){

   int number,flip_number;

    printf("enter the number u want to check\n");
     scanf("%d",&number);


    flip_number= ~number;

    printf("number %d after flipping is %d",number,flip_number);




}
