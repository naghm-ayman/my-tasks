  #include<stdio.h>

void main(void){

  int month ;

     printf("enter the month nunber u want to check\n");
      scanf("%d",&month);


      if (month==(1||3||5||7||8||10||12))
        {
          printf("number of days = 31");
        }

        else if ( month==((4)||(6)||(9)||(11)))
            {

             printf("number of days = 30");
            }

           else if (month==2)
               {
                printf("number of days = 28 or 29");

               }

               else
                printf("invalid number");









}
