#include <stdio.h>
#include <string.h>

// Concatenate two strings using custon function
// Concatenate two strings using our function

void main()
{
    char s1[30], s2[30];
    char s3[30], s4[30];
    char concatenated[60];
    int len3, len4, i;
    
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    printf("String 1 is %s\n", s1);
    printf("String 2 is %s\n", s2);

    strcat(s1, s2);
    printf("Concatenated string is %s\n", s1);

    printf("Concatenate using my own function:");
    printf("Enter string 1: ");
    gets(s3);
    printf("Enter string 2: ");
    gets(s4);
    len3 = strlen(s3);
    len4 = strlen(s4);

    for (i=0; i<=len4; i++)
        {
            s3[len3+i] = s4[i];
        }
    printf("Concatenated string is %s\n", s1);
}