#include<stdio.h>

 void main(void){

 float Math,Arabic,Physics,Chemistry,Biology;
 float Total,Avarage,Percentage;


 printf("enter the subject mark\n");
 scanf("%f%f%f%f%f",&Math,&Arabic,&Physics,&Chemistry,&Biology);

 Total= Math+Arabic+Physics+Chemistry+Biology;
 Avarage = Total / 5.0;
 Percentage= Avarage*100;


  printf("the total marks %.2f \n",Total);
   printf("the avarage marks %.2f\n",Avarage);
    printf("the Percentage marks =%.2f \n ",Percentage);





 }
