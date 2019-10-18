//memory layout - one global variable in program

#include<stdio.h>
int global=10; /*Uninitialized Variable stored in bss*/
int main(void)
{
    static int i=100;
    return 0;

}

