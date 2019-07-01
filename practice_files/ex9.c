//Arrays of Strings, Looping

#include<stdio.h>

int main(int argc, char *argv[])
{
    // going through each string/argument in argv
    int i=0;

    for(i=1; i<argc; i++) {
        printf("argument %d: %s\n", 
                i, argv[i]);
    }

    // making our own array of strings
    
    char *states[] = {'\0', "Guwahati", "Kolkata", "Mumbai", "Bangalore"};

    int num_states = 5;
    
    for(i=1; i<num_states; i++) {
        printf("states %d: %s\n",
                i, states[i]);
    }

    return 0;
}


