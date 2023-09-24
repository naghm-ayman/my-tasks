#include <stdio.h>
#define MAX_SIZE 3

void main(void){

int array_1[MAX_SIZE][MAX_SIZE];
int row , column,sum;



printf("enter the elements of the first matrix 3x3\n");

for(row=0; row<MAX_SIZE; row++){
    for(column=0; column<MAX_SIZE; column++){
        scanf("%d",&array_1[row][column]);
}
}

for(row=0; row<MAX_SIZE; row++){
        sum=0;
    for(column=0; column<MAX_SIZE; column++){
           sum+=array_1[row][column];
        }
    printf("sum of row %d equal %d \n",row+1,sum);
}

for(row=0; row<MAX_SIZE; row++){
        sum=0;
    for(column=0; column<MAX_SIZE; column++){
           sum+=array_1[column][row];
        }
    printf("sum of column %d equal %d \n",column+1,sum);
}



}
