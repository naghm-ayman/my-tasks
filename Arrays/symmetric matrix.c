#include <stdio.h>
#define MAX_SIZE 3

int main()
{
    int original[MAX_SIZE][MAX_SIZE];
    int transpose[MAX_SIZE][MAX_SIZE];
    int row,col,Symmetric=1;

    printf("Enter elements in matrix of size 3x3: \n");

    for(row=0; row<MAX_SIZE; row++){
        for(col=0; col<MAX_SIZE; col++)
        {
            scanf("%d", &original[row][col]);
        }
        }

    for(row=0; row<MAX_SIZE; row++)
    {
        for(col=0; col<MAX_SIZE; col++)
        {
            transpose[row][col] = original[col][row];
    }
    }

    for(row=0; row<MAX_SIZE &&Symmetric; row++)
    {
        for(col=0; col<MAX_SIZE; col++)
        {
            if(original[row][col] != transpose[row][col])
            {
                Symmetric = 0;
                break;
            }
        }
    }

    if(Symmetric == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");

        for(row=0; row<MAX_SIZE; row++)
        {
            for(col=0; col<MAX_SIZE; col++)
            {
                printf("%d ", original[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }
}
