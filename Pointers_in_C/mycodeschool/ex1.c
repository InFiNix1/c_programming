//Pointers Exercise 1

#include<stdio.h>
int main()
{
    int a=5;
    int* p=&a;

    int** q =&p;

    printf("Value of a = %d ----- Should Be 5\n", a);
    printf("Address of a in pointer p ----- %d\n", p);
    printf("Value of a through dereferencing --%d\n", *p);
    printf("Lets check what does &a shows -- %d\n", &a);

    printf("Something Freaky [&p]--- %d\n", q);
    printf("Freaky 2 [*q] -- should derefrence level 1 ----- %d\n", *q);

    printf("Freaky 3 [**q] -- should derefrence level 2 ----- %d\n",**q);

    return 0;



}

