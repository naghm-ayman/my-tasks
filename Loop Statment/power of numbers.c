#include<stdio.h>

void main(void){

int base,exponential,count=1;
float power=1;

 printf("enter base of number and its power\t");
 scanf("%d%d",&base,&exponential);

 do {

    power*= base;
    count++;

 }while(count <= exponential);

 printf("%d ^ %d = %.1f", base, exponential, power);
}
