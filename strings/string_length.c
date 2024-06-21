#include <stdio.h>
#include <string.h>

// Print the length of a string using predefined function and our own unction
void main()
{
    unsigned int length;
    unsigned int count = 0, i=0;
    char name[30];
    printf("Enter your name: ");
    gets(name);
    length = strlen(name);
    printf("Your name is %s\n", name);
    printf("The length of your name is %d\n", length);

    // using our own function
    while (name[i] != '\0')
        {
            count++;
            i++;
        }
    printf("Using my own function, The length of your name is %d\n", count);
}