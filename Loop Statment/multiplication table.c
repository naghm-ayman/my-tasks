#include<stdio.h>

void main(void){

 int i,j ;
 int  count =1;

 printf("enter the number u want to detect its multiplication table \t");
 scanf("%d",&i);



     for (j=0; j<=12; j++){

        count = i*j;
        printf(" %d * %d = %d \n", i,j ,count);

     }




  }



