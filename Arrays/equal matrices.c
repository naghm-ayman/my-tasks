#include <stdio.h>
#define MAX_SIZE 3

void main(void){

int array_1[MAX_SIZE][MAX_SIZE];
int array_2[MAX_SIZE][MAX_SIZE];
int row , column ,flag=1;

printf("enter the elements of the first matrix 3x3\n");

for(row=0; row<MAX_SIZE; row++){
    for(column=0; column<MAX_SIZE; column++){
        scanf("%d",&array_1[row][column]);
}
}

printf("enter the elements of the second matrix 3x3\n");

for(row=0; row<MAX_SIZE; row++){
    for(column=0; column<MAX_SIZE; column++){
        scanf("%d",&array_2[row][column]);
}
}

for(row=0; row<MAX_SIZE; row++){
    for(column=0; column<MAX_SIZE; column++){
        if (array_1[row][column]!=array_2[row][column]){
            flag=0;
            break;
        }
}
}

if (flag==1)
    printf("the matrix array_1 equal to array_2 ");

else
   printf("the matrix array_1 is not equal to array_2 ");
}
