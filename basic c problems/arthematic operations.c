#include<stdio.h>

 void main(void){

 int N1,N2;
 int sum, subtraction, multiplication, division, modulus;
 printf ("enter two numbers");
 scanf("%d%d",&N1,&N2);



 sum= N1+N2;
  subtraction= N1-N2;
    multiplication= N1*N2;
     division= (float) N1 / N2;
       modulus= N1%N2;

    printf ("sum= %d\n",sum);
     printf ("subtraction= %d\n",subtraction);
      printf ("multiplication= %d\n",multiplication);
       printf (" division= %f\n",division);
        printf (" modulus= %d\n", modulus);




 }
