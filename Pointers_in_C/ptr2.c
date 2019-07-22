#include<stdio.h>
int main()
{
    int x=5;
    int *p=&x;
    *p=x;
    int **q =&p;
    int ***r=&q;

    printf("Pointer p(*p) - Value stored at address p: %d\n", *p);
    printf("Pointer q(*q) - Value stored at address q: %d\n", *q);
    printf("Pointer to pointer q(**q) - Value stored at address *q  %d\n", **q);
    printf("Pointer to pointer r(**r) - Value stored at address *r %d\n", **r);
    printf("Pointer to pointer to pointer r(***r): - Value stored at address **r %d\n", *(*(*r)));

    ***r=20;

    printf("Value of x: %d\n", x);
    **q = *p + 2;
    printf("Value of x: %d\n", x);

   
    return 0;
}

