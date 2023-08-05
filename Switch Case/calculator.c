#include<stdio.h>
#include<math.h>

void main(void){

 float num1,num2,result;
 char operation;
  printf("enter 1st number\n then enter operation [ + - * / ^]\n then enter 2nd number\n ");
    scanf("%f %c %f",&num1,&operation,&num2);


 switch(operation)
 {
   case '+' :
       result=num1+num2;
        break;

    case '-':
     result=num1-num2;
        break;

    case '*':
      result=num1*num2;
        break;

    case '/':
       result=num1/num2;
        break;

    case '^':
       result= pow(num1,num2);
        break;

    default:
       printf("invalid operation");
       break;
 }
   printf(" %.3f %c %.3f = %.3f ", num1,operation,num2,result);
}
