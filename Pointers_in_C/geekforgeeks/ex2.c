#include<stdio.h>
int main()
{
    int x =10; 
    // 1. Since there is * in declaration, ptr becomes a pointer
    // variable(a variable that stores address of another variable)
    // 2. Since there is int before *, ptr is pointer to another
    // integer type variable
    int *ptr;

    ptr = &x;

    
    printf("ptr --> %ld\n", ptr);
    
    printf("*ptr --> %ld\n", *ptr);

    printf("&x --> %p\n", &x);
    return 0;

}
