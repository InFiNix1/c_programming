#include<stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p=&a;
    printf("Size of integer is %d:\n", sizeof(int));
    printf("Address = %d\nValue = %d\n", p, *p);
    printf("Address = %d\nValue = %d\n", p+1, *(p+1));
    char *p0;
    p0 = (char*)p; //typecasting
    printf("Size of character is %d:\n", sizeof(char));
    printf("Address = %d\nValue = %d\n", p0, *p0);
    printf("Address = %d\nValue = %d\n", p0+1, *(p0+1));
    //void pointer - Generic Pointer
    void *p1;
    p1 = p;
    printf("Address = %d\n", p1);


    return 0;
}
