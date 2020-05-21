#include<stdio.h>
void swap(int*, int*); //Function Prototype
int main()
{
    int a=100, b=500;
    printf("Before Swap: %d\t%d", a, b);
    swap(&a,&b);
    printf("\nAfter Swap Inside Main Function: %d\t%d\n", a, b);
    return 0;
}

void swap(int* x, int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nAfter Swap Inside Swap Function: %d\t%d", *x, *y);
    
}
