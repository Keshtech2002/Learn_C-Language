#include <stdio.h>

void main()
{
    int a[5];
    int i;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < 5; i++)
        {
            scanf("%d", &a[i]);
        }

    for (i = 0; i < 5; i++)
        {
            printf("Element at index %d is %d\n", i, a[i]);
        }
}