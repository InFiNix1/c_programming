//Pointers To Pointers

#include<stdio.h>
int main()
{
    int x=6;
    int *p=&x;
    int **q=&p;
    int ***r=&q;

    printf("Value at x --> %d\n", x);

    printf("Address at p --> %d\n", p);
    
    printf("Value at p --> %d\n", *p);
    
    printf("Address at q --> %d\n", q);
    printf("Value at q --> %d\n", *q);
    printf("Value at q --> %d\n", **q);
    printf("Value at q --> %d\n", r);
    printf("Value at r --> %d\n", **r);
    printf("Value at r --> %d\n\n", ***r);
    
    ***r = 10;

    printf("Value of r %d\n", ***r);   
    **q = *p + 2;
    printf("Value of r %d\n", ***r);   
    return 0;



}

