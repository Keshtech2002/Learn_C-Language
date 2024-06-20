#include <stdio.h>

// Read two arrays of same size and return their sum in a third array

void main()
{
    int a[5], b[5], sum_array[5], i;
    printf("Enter the elements of the first array:");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter the elements of the second array:");
    for (i = 0; i < 5; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < 5; i++)
        sum_array[i] = a[i] + b[i];

    printf("The sum of the two arrays is:\n");
    for (i=0; i<5; i++)
        printf("Element at index %d is %d\n", i, sum_array[i]);
}