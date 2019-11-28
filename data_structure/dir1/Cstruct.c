#include<stdio.h>
#include<string.h>
#pragma pack(1)
typedef struct abcS
{
    long int b;
    char a;
    char c;
} abcT;
#pragma pack()
typedef struct EmployeeS
{
    char first[30];
    char last[30];
    int salary;
} EmployeeT;

void PrintData(EmployeeT* emp);
void PrintFullname(EmployeeT* emp);

void PrintEmail(EmployeeT* emp);

int main()
{
    printf("%ld", sizeof(abcT));
    return 0;
    EmployeeT emp1;
    strcpy(emp1.first, "Sauronil");
    strcpy(emp1.last, "Das");
    emp1.salary=5000;
    PrintData(&emp1);
   
    

    return 0;
}


void PrintFullname(EmployeeT* l_emp)
{
    printf("Fullname of Employee: %s %s\n", l_emp->first, l_emp->last);
}

void PrintEmail(EmployeeT* e_emptr)
{
    printf("Email of Employee - %s.%s@gmail.com\n",
            e_emptr->first,
            e_emptr->last);
}


void PrintData(EmployeeT* emp)
{
    printf("First Name of Employee - %s\n",
            emp->first);
    printf("Last Name of Employee  - %s\n",
            emp->last);
    printf("Salary of Employee     - %d\n",
            emp->salary);
    PrintFullname(emp);
    PrintEmail(emp);
}
