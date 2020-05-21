#include<stdio.h>
int add(int, int);
int multiply(int, int, int);
int main()
{
    int r1, r2, r3;
    int (*ptr)(int, int);

    r1 = add(30, 40);
    r2 = multiply(2,3,4);
    ptr=&add;

    r3=ptr(20, 20);

    printf("R1 = %d\nR2 = %d\nR3 = %d\n", r1, r2, r3);
    
    return 0;
}

int add(int x, int y)
{   
    int z= x+y;
    return z;
}

int multiply(int x, int y, int z)
{
    int w = x * y * z;
    return w;
}
