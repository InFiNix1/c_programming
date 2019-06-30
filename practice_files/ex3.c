/*Using Valgrind*/
// This program is purposefully broken. 
// Hint no value after height

#include<stdio.h>
int main()
{
    int age=23;
    int height;

    printf("I'm %d years old\n", age);
    printf("I'm %d centimeters tall\n", height);
    return 0;
}

