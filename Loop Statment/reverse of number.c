#include<stdio.h>

void main(void){

int digit;
int count=0;

 printf("enter any number\t");
 scanf("%d",&digit);


  while (digit!=0){

    count=(count*10)+(digit%10);

    digit/=10;

  }


 printf(" the reverse of the number is %d",count);

}
