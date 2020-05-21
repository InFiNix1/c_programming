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
    struct EMP* emp1;
    emp1=(struct EMP*)malloc(sizeof(struct EMP));
    if(emp1==NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        printf("\nEnter Emp1 Data: ");
        scanf("%d %s %f", &emp1->eno, emp1->ename, &emp1->esal);
    }

    printf("\nEmployee 1 Details are: %d %s %.3f\n", emp1->eno, emp1->ename, emp1->esal);


    return 0;
}
