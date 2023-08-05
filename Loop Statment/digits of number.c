#include <stdio.h>

void main(void)
{
    int digit;
    int count = 0;

     printf("enter any number");
     scanf("%d",&digit);

     do {

     count++;

     digit/=10;


     } while(digit!=0);

     printf("Number of digits in the number is %d",count);

}
