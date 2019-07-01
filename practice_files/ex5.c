//Types of Variables

#include<stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 567890.3454365;
    char initial = 'S';
    char first_name[] = "Sauronil";
    char last_name[] = "Das";

    printf("You are %d kilometers and more away from Kolkata.\n", distance);
    //Integers are declared with int keyword and print them with %d
    printf("You have %f much power.\n", power);
    //Floating point values, i.e bigger numbers are declared with float or double 
    //and are printed with %f
    printf("You hold super power of %f\n", super_power);
    printf("Your Initial is %c.\n", initial);
    //Single character is declared with char and written with ' (single-quote)
    //character around the char and then printed with %c
    printf("Your First Name is %s.\n", first_name);
    //Array of characters are declared with char variable_name[], and written
    //using " (double-quote). They are printed using %s
    printf("Your Last Name is %s.\n", last_name);
    return 0;
}


    /* All %d(int) %f(float/power) %c (character) and %s (string) are called format specifiers wich are the controlled by header file stdio.h which stands for standard Input and Output */
