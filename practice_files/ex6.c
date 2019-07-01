//More vairables and some Math

#include<stdio.h>
int main(int argc, char *argv[])
{
    int bugs = 100;
    float bug_rate = 2.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The Entire Universe has %ld bugs.\n", universe_of_defects);
    // Printing out the number using %ld which adds a modifier to the usual %d
    // Addind l meas "print this as a long decimal"

    double expected_bugs = bugs * bug_rate;

    printf("You are to expect %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs/universe_of_defects;

    printf("There will be %e expected bugs in The Entire Universe.\n", part_of_universe);

    //something that makes no sense
    char nul_byte = '\0';

    int care_percentage = bugs * nul_byte;
    printf("You are expected to care %d %%.\n", care_percentage);
    return 0;
}

