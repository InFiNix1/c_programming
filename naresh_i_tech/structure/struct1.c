#include<stdio.h> //finding size of struct and print details
int main()
{
    struct __EMP__
    {
        int eid; //4 Bytes
        char ename[30]; //30 Bytes -- But here some data is padded for
                        //easy access by the compiler
        float esal; //4 Bytes
    };

    struct __EMP__ emp1 = {101, "darkFire", 500000};
    printf("\nSize of Struct is : %ld\n", sizeof(struct __EMP__));
    printf("\nEmployee ID: %d\nEmployee Name: %s\nEmployee Salary: %.3f\n", emp1.eid, emp1.ename, emp1.esal);
//For Printing Float with specific decimal points -- %.nf --- Here n = Positive Interger. 
    return 0;
}
