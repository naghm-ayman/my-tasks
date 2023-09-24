
#include<stdio.h>
#define MAX_SIZE 1000

void main (void){

 int i,size;
 int original[MAX_SIZE],copy[MAX_SIZE];

 printf("enter the array size ");
 scanf ("%d",&size);

 printf("enter %d of the elements of the array",size);
 for (i=0; i<size; i++){

    scanf("%d",&original[i]);

}
printf("elements of original array is  ");
 for(i=0; i<size; i++){

    printf("%d, ",original[i]);
}
printf("\nelements of the copy array is  ");
 for(i=0; i<size; i++){
 copy[i]=original[i];
    printf("%d, ",copy[i]);
}
}
