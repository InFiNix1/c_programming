#include<stdio.h>
int main()
{
    int var=10; //A normal integer variable
    int *ptr = &var; // A pointer variable that holds adddress of var

    //This line prints value at address stored in ptr
    // Value stored in value of variable "var"
    printf("Value of var = %d\n", *ptr);
    printf("Address of var =%p\n", ptr);

    *ptr =20; //Value at address updated to 20
    //This should print 20

    printf("After doing *ptr=20, *ptr is -- %d\n", *ptr);
    return 0;
}

