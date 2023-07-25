#include<stdio.h>

void main(void){

    int days;
    float week,month,year;


    printf(" enter the number of days:\n ");
    scanf("%d",&days);


      year=days/356;
       month= days /30;
        week=days /52.177457;


        printf(" %d days= %.3f years \n",days,year);
         printf(" %d days= %.3f month \n",days,month);
          printf(" %d days= %.3f weeks \n",days,week);


    }
