#include<stdio.h>
struct EMP
{
    int eno; // 4 Bytes
    char ename[20]; // 20 Bytes
    float esal; //4 Bytes 
    //Due to Padding -- My Guess 28
};

int main()
{
    char* cp;
    int* ip;
    struct EMP* semp;
    printf("Size of Char       Pointer: %u\n", sizeof(cp));
    printf("Size of Int        Pointer: %u\n", sizeof(ip));
    printf("Size of Strcut EMP Pointer: %u\n", sizeof(semp));
    printf("\n\nDue to Padding Size of Structure %u\n", sizeof(struct EMP));
    return 0;
}
