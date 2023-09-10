#include<stdio.h>

int get_summing(int num);


void main (void){
int num,sum;

printf("enter the digits u want their sum  ");
scanf("%d",&num);

sum = get_summing(num);
printf("%d",sum);
}
int get_summing(int num){
  if (num==0)
    return 0;
  else
    return((num%10)+ get_summing(num/=10));


}
