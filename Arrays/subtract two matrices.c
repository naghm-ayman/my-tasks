#include <stdio.h>
#define MAX_SIZE 3

void main(void){

int array_1[MAX_SIZE][MAX_SIZE];
int array_2[MAX_SIZE][MAX_SIZE];
int array_sub[MAX_SIZE][MAX_SIZE];
int row , column;

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
        array_sub[row][column]=array_1[row][column]-array_2[row][column];
}
}

printf("the subtraction of array 1 and 2 is \n ");

for(row=0; row<MAX_SIZE; row++){
    for(column=0; column<MAX_SIZE; column++){
   printf("%d ",array_sub[row][column]);
}
printf("\n");
}

}
