#include<stdio.h>

void main(void){

 int day;

  printf("enter the day number u want to know between 1-7 \n");
    scanf("%d",&day);

 switch(day)
 {
   case 1:
       printf("%dst day in week is Saturday",day);
        break;

    case 2:
       printf("%dnd day in week is Sunday",day);
        break;

    case 3:
       printf("%drd day in week is Monday",day);
        break;

    case 4:
       printf("%dth day in week is Tuesday",day);
        break;

    case 5:
       printf("%dth day in week is Wednesday",day);
        break;

    case 6:
       printf("%dth day in week is Thursday",day);
        break;

    case 7:
       printf("%dth day in week is friday",day);
        break;

    default:
       printf("%d is not a week day",day);
       break;
 }

}

