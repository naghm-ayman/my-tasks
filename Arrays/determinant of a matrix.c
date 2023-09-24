#include <stdio.h>
#define MAX_SIZE 3

void main(void){

int array[MAX_SIZE][MAX_SIZE];
int row , column, size, result;
int a, b, c, d, e, f, g, h, i;

printf("enter the  size of the matrix");
scanf("%d",&size);

printf("enter the elements of the matrix\n");

for(row=0; row<size; row++){
    for(column=0; column<size; column++){
        scanf("%d",&array[row][column]);
}
}
  printf("elements in the matrix :");

for(row=0; row<size; row++){
        printf("\n");
    for(column=0; column<size; column++){
        printf("%d,",array[row][column]);
}
}
  printf("\n");

  if(size==2)
    {
   result= (array[0][0]*array[1][1])-(array[0][1]*array[1][0]);
  printf("Determinant of the matrix of size %dx%d is : %d",size,size,result);

    }
  else if (size==3){

    a = array[0][0];
    b = array[0][1];
    c = array[0][2];
    d = array[1][0];
    e = array[1][1];
    f = array[1][2];
    g = array[2][0];
    h = array[2][1];
    i = array[2][2];


    result = (a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));

    printf("Determinant of the matrix of size %dx%d is : %d",size,size,result);
  }


}
