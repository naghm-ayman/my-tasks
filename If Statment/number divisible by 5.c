#include<stdio.h>

void main(void){

    int  num;

     printf("enter the number u want to check\n");
       scanf("%d",&num);


     if (num%5==0 && num%11==0)
        printf("%d is divisible by 5 and 11",num);
     else
        printf("%d is not divisible by 5 and 11",num);


}
