#include <stdio.h>

void max_num(int num1, int num2);
void min_num(int num1, int num2);

void main(void){

int num1,num2;

printf("enter two numbers");
scanf("%d %d",&num1,&num2);

 max_num(num1,num2);
 min_num(num1,num2);
}

void max_num(int num1, int num2){

if (num1>num2)
    printf("%d is the maximum number \n",num1);
else
    printf("%d is the maximum number \n",num2);

}
void min_num(int num1, int num2){

if (num1<num2)
    printf("%d is the minimum number \n",num1);
else
    printf("%d is the minimum number \n",num2);

}
