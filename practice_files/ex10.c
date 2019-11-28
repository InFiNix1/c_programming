// While-Loop and Boolean Expressions

#include<stdio.h>
int main(int argc, char *argv[])
{
    // print each string in argv
    int i=1;

    while(i<argc) {
        printf("argument %d: %s\n", 
                i, argv[i]);
        i++;
    }

    // creating our of array of strings

    char *states[] = {'\0', "America", "Germany", "Australia", "New Zealand"};

    int num_states = 5;
    i = 1;

    while(i<num_states) {
        printf("Countries I wish to settle in %d: %s\n", 
                i, states[i]);
        i++;
    }

    return 0;
}
