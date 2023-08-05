  #include<stdio.h>

void main(void){


   float basic, HRA, DA, gross;
       printf("enter BASIC salary\n");
         scanf("%f",&basic);


      if (basic <= 10000 )
      {
        DA= basic*0.8;
        HRA= basic*0.2;
      }

      else if ( 10000 <= basic <= 20000 )
      {
            DA= basic*0.9;
            HRA= basic*0.25;
      }
      else
      {
              DA= basic*0.95;
              HRA= basic*0.3;
      }

        gross= basic+DA+HRA;

         printf("GROSS SALARY IS= %.3f", gross);


}
