#include<stdio.h>

void main(void){

   char ch;

     printf("enter the alphabet u want to check\n");
      scanf("%c",&ch);

       if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
               printf("%c is vowel ",ch);

      else if ((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
         printf("%c is consonant",ch);

         else
            printf("%c is not an alphabet",ch);




}
