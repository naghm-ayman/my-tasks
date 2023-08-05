#include<stdio.h>
#include<math.h>
#define base 2

void main(void){

int bin ,decimal;
int count=0,exponential=0;

 printf("enter any binary number ");
 scanf("%d",&bin);

 while (bin!=0) {
     count =bin%10;
     bin/=10;


  if (count==1){
    decimal+=(count* pow (base,exponential));
    exponential++;}
  else
    exponential++;


 }

   printf("the number in decimal = %d",decimal);
}
