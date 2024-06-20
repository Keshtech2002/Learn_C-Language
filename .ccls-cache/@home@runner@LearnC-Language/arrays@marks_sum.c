#include <stdio.h>
// Caalculate the sum of the marks of 5 students and their average

void main()
{
    int marks[5];
    int i;
    float sum = 0, average;

    // Collect the marks of 5 students
    printf("Enter the marks of 5 students:\n");
    for (i = 0; i < 5; i++)
        {
            scanf("%d", &marks[i]);
        }
    // Calculate the sum of the marks
    for (i = 0; i < 5; i++)
        {
            sum += marks[i];
        }

    average = sum / 5;
    printf("The sum of the marks is %.2f\n", sum);
    printf("The average of the marks is %.2f\n", average);
}