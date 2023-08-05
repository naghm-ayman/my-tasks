  #include<stdio.h>

void main(void){

   int Physics,Chemistry,Biology,Mathematics,Computer;
   float grade;
       printf("enter your grade in each subject\n");
         scanf("%d%d%d%d%d",&Physics,&Chemistry,&Biology,&Mathematics,&Computer);

    grade=(Physics+Chemistry+Biology+Mathematics+Computer)/5.0;

      if (grade >= 90)
      {
         printf("your  Grade is A ");
      }

      else if (grade >= 80)
      {
            printf("your  Grade is B ");
      }
      else if (grade >= 70)
      {
           printf("your  Grade is C ");
      }
      else if (grade >= 60)
      {
           printf("your  Grade is D ");
      }
      else if (grade >= 40)
      {
           printf("your  Grade is E ");
      }
      else
      {
           printf("your  Grade is F ");
      }

}
