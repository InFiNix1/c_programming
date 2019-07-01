//The Structure of C Program


#include<stdio.h> 

/*An include and it is the way to import the contents of 
one file into this spource file. C has a convention of using .h extensions 
for "headers" files, which then contains list of functions you want to use 
in your program*/

int main(int argc, char *argv[]) 
    /*A more complex version if the main function. C works in the OS by loading 
     * the program, and then runs the function named main. For the funtion to be
     *complete it need to return an int and two parameters, an int for argument
     count, and an array of char *string for the arguments*/
{ //This is how we start block of program/code
 
    int distance = 100; //assigned a variable name and a value. 
    //In C statements(except logic) end is a ';' (semicolon) character
    printf("You are %d miles away from your dreams. Fight, Run, Struggle to achieve\n", distance);
    return 0; //A return from the main function, which gives the OS your exit value. 
}

