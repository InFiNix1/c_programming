//Sizes and Arrays

//C treats strings are just arrays of bytes, and it is only the different
//print functions that knows the difference and interprets them accordingly

#include<stdio.h>

int main(int argc, char *argv[])
{

    int area[] = {1, 2, 3, 4};
    char name[] = "Sauronil";
    char full_name[] = {'S', 'U', 'R', 'O', 'N', 'I', 'L',
                        ' ',
                        'D', 'A', 'S'};


    printf("Size of int: %ld\n", 
            sizeof(int));
    printf("Size of area[] : %ld\n", 
            sizeof(area));
    printf("The number of int in area: %ld\n", 
            sizeof(area) / sizeof(int));

    printf("The 1st area is %d, 2nd is %d & 3rd is %d\n", 
            area[0], area[1], area[2]);

    printf("Size of char: %ld\n", 
            sizeof(char));
    printf("Size of name[] : %ld\n", 
            sizeof(name));
    printf("The number of char in name: %ld\n", 
            sizeof(name) / sizeof(char));

    printf("Size of full_name[] : %ld\n", 
            sizeof(full_name));
    printf("The number of char in full_name: %ld\n", 
            sizeof(full_name) / sizeof(char));

    printf("Name - \"%s\" & Full Name - \"%s\"\n", 
            name, full_name);
    return 0;
}

    

    
