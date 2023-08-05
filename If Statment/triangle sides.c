  #include<stdio.h>

void main(void){

  float s1,s2,s3;

     printf("enter the sides of trinagle\n");
      scanf("%f%f%f",&s1,&s2,&s3);


      if (s1==s2&&s2==s3)
      {
         printf("equilateral triangle ");
      }

      else if (s1==s2 || s2==s3 ||s1==s3)
      {
            printf("Isosceles triangle ");
      }
      else
      {
           printf("Scalene triangle");
      }

}
