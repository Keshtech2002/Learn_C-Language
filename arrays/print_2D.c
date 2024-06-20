#include <stdio.h>
// Print the elements of a 2D array with sum

void main()
{
    int array[3][3];
    int i, j, sum = 0;
    printf("Enter the elements of the array:\n");

    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            scanf("%d", &array[i][j]);

    for (i=0; i<3; i++)
        {
        for (j=0; j<3; j++)
            {
                sum += array[i][j];
                printf("%d\t", array[i][j]);
            }
        printf("\n");
        }
    printf("The sum of the elements of the array is %d\n", sum);
}