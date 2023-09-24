#include<stdio.h>
#define MAX_SIZE 1000

void main (void){

 int i,size,insert,pos;
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

  printf(" enter the number u want to insert");
    scanf("%d",&insert);

  printf(" enter the position u want to insert in ");
    scanf("%d",&pos);
 if (pos > size+1 || pos <= 0){

    printf("invalid position to insert in");
}
 else{
     for(i=size; i>=pos; i--){
        read[i] = read[i-1];
        }

    read[pos-1]=insert;

 }

for(i=0; i<size; i++){
    printf("%d, ",read[i]);
}

}
