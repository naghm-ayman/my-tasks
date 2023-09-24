#include<stdio.h>
#define MAX_SIZE 1000

void main (void){

 int i,size,max_1,max_2;
 int read[MAX_SIZE];

 printf("enter the array size ");
 scanf ("%d",&size);

 printf("enter %d of the elements of the array\n",size);
for (i=0; i<size; i++){

    scanf("%d",&read[i]);
}
  max_1=read[0];


for(i=0; i<size; i++){

    printf("%d, ",read[i]);
}
for(i=0; i<size; i++){
    if (read[i]> max_1){

            max_2=max_1;
            max_1=read[i];
    }

}
  printf("\n first maximum number is %d ",max_1);
  printf("\n second maximum number is %d",max_2);
}
