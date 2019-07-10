//Pointers, Dreaded Pointers

#include<stdio.h>
int main(int argc, char *argv[])
{
    //create values we care about/creating array of names and ages
    int age[] = {23, 25, 30, 35, 40, 50};
    char *names[] = {"Sauronil", "Miranda", "Karlie", "John", "Leonard", "Erik"};

    //safely get sizes of ages/getting the number of ages
    printf("Size of Age: %ld\n", 
            sizeof(age));
    printf("Size of int: %ld\n", 
            sizeof(int));
    int count = sizeof(age)/sizeof(int);
    printf("count Value: %ld\n", 
            count);
    int i=0;

    //first way of indexing
    for(i=0; i<count; i++) {
        printf("%s is %d years old.\n",
                names[i], age[i]);
    }
    printf("----\n");

    //setup the pointers to the start of array
    int *cur_age = age;
    char **cur_names = names;

    //second way of using pointers
    for(i=0; i<count; i++) {
        printf("%s lived for %d years.\n", 
                *(cur_names+i) , *(cur_age+i));
    }

    printf("----\n");
    //third way, pointers are just array
    for(i=0; i<count; i++) {
        printf("%s has been breathing oxygen for %d years long.\n", 
                cur_names[i], cur_age[i]);
    }
    printf("----\n");

    //fourth way of printing pointers in a stupid complex way
    for(cur_names = names, cur_age=age; (cur_age - age) < count;
            cur_names++, cur_age++) {
        printf("%s has %d years of age under his/her belt.\n",
                *cur_names, *cur_age);
    }
    return 0;
}

