#include<stdio.h>
int main()
{
    int i=100;
    int* p=&i;

    printf("Value of   i: %d\n", i); 
    printf("Value of   p: %u\n", p); 
    printf("Address of i: %u\n", &i); 
    printf("Address of p: %u\n", &p); 
    printf("Pointer of p: %d\n", *p); 
    printf("Value of   i: %d\n", *(&i)); 
    
    printf("\nSize of Pointer -- %d\n", sizeof(p));
    printf("\nSize of Integer -- %d\n", sizeof(i));
    
    return 0;
}
