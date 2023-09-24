#include<stdio.h>
#define MAX_SIZE 1000

void main (void){

 int i,size;
 int read[MAX_SIZE];

 printf("enter the array size ");
 scanf ("%d",&size);

 printf("enter %d of the elements of the array",size);
for (i=0; i<size; i++){

    scanf("%d",&read[i]);
}

for(i=0; i<size; i++){
    printf("%d, ",read[i]);
}

}
