#include<stdio.h>

int get_fact(int num);

void main(void){
int num,fact;

printf("enter the number u want to have its factorial");
scanf("%d",&num);

fact=get_fact(num);
printf("factorial of %d is %d",num,fact);

}
int get_fact(int num)
{
  if(num==0)
    return 1;
  else
    return(num * get_fact(num-1));


}




