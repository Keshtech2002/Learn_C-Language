#include <stdio.h>

// read and print strings

void main(){
    char name[30];
    printf("Enter your name: ");

    gets(name);

    printf("Your name is %s\n", name);
    puts(name); // add a newline authomatically
    puts(name);
}