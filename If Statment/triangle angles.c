  #include<stdio.h>

void main(void){

  float a1,a2,a3,sum;

     printf("enter the angles of trinagle\n");
      scanf("%f%f%f",&a1,&a2,&a3);

      sum=a1+a2+a3;

      if ((sum==180)&&(!(a1&&a2&&a3)==0))
        {
         printf("valid triangle ");
        }

      else
        {
         printf("invalid triangle ");
        }

}
