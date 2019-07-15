#include<stdio.h>
int main(int argc, char* argv[])
{
    printf("Argumet count: %d\n", argc);
    int i;
    for(i=0; i<argc; i++) {
        printf("Argument is --> %s\n", argv[i]);
        printf("Value of Pointer to char is %c\n", *argv[i]);
        printf("Address of Pointer to char is %p\n", argv[i]);
    }
    printf("\n-------------\n");
    int a=10;
    int* p =&a;  //address of a
    //printf("Address of p: %p\n", p);
    printf("Value of a :%d\n", *p); // *p - value at address pointed by p
    printf("Address of a: %p\n", &p);
    *p = 12; //dereferencing
    printf("Dereferencing Value of a: %d\n", a);
    printf("\n----------------------------------\n\n");
    char *name[] = {"Sauronil", "Das"};
    

    printf("Value is %s ", name[0]);
    printf("\nValue is %s: ", name[1]);

    return 0;
}

