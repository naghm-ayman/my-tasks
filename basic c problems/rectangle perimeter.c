#include<stdio.h>

void main(void){

    float X,Y;
    float operation;


    printf(" enter the base:\n ");
    scanf("%f",&X);

    printf(" enter the power:\n ");
    scanf("%f",&Y);

    operation = pow(X,Y);

        printf(" The result of the operation = %.3f \n",operation);





}
