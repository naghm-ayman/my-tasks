#include <stdio.h>

//function declaration(1st step)
int cube_number(int num);

void main(void){

int num;
int result;


 printf("enter any number to get its cube");
 scanf("%d",&num);
 //function call(3rd step)
result = cube_number(num);

printf("cube of %d = %d",num,result);
}

//function definition(2nd step)
 int cube_number(int num){

 return(num * num * num);
 }
