#include<stdio.h>

void main(void){

   char ch;

     printf("enter the alphabet u want to check\n");
      scanf("%c",&ch);

      if ((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
        printf("%c is alphabet",ch);

      else
         printf("%c is not alphabet",ch);



}
