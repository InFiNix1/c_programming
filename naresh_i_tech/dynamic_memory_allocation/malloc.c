#include<stdio.h>
#include<stdlib.h>

struct EMP
{
    int eno;
    char ename[20];
    float esal;
};

int main()
{
    struct EMP* emp;
    emp=(struct EMP*)malloc(sizeof(struct EMP));

    if(emp==NULL)
    {
        printf("\nMemory Was Not Allocated For Structure");
    }
    else
    {
        printf("\nEnter Details of Employee: ");
        scanf("%d %s %f", &emp->eno, emp->ename, &emp->esal);
        printf("\nEmployee Number: %d\nEmployee Name: %s\nEmployee Salary: %.3f\n", emp->eno, emp->ename, emp->esal);
    }
    return 0;
}
