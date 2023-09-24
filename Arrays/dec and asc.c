
#include <stdio.h>
#define MAX_SIZE 100

void main(void)
{
    int read[MAX_SIZE];
    int i, j,order ,size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &read[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(read[i] > read[j])
            {
                order =read[i];
                read[i] = read[j];
                read[j] =order;
            }
        }
    }
    printf("\n Elements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d,", read[i]);
    }

}
