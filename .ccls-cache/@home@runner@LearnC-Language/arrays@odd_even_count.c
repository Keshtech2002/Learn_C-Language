#include <stdio.h>
// Programme to read and array and count the even and odd numbers

void main()
{
    int a[10];
    int i, even_count = 0, odd_count = 0;
    
    // Collect the marks of 5 students
    printf("Enter the elements of the array:\n");
    for (i = 0; i < 10; i++)
        {
            scanf("%d", &a[i]);
        }

    // Count the even and odd numbers
    for (i=0; i<10; i++)
        {
            if (a[i] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }

    printf("The number of even numbers is %d\n", even_count);
    printf("The number of odd numbers is %d\n", odd_count);
}