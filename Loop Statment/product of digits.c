#include <stdio.h>

 void main(void)
{
    int num;
    int product = 1;


    printf("Enter any number: ");
    scanf("%d", &num);

    while(num!=0){


        product*= (num % 10);
        num /= 10;
    }

    printf("product of the digits: %d", product);


}
