#include<stdio.h>
#include<string.h>

#define __EMPLOYEE__ (1)
#define __MANAGER__ (2) 

typedef struct EmployeeS
{
    char f_name[20];
    char l_name[20];
    char department[20];
    int salary;  
} EmployeeT;

typedef struct ManagerS
{
    char f_name[20];
    char l_name[20];
    char designation[20];
    int salary;
} ManagerT;


void PrintData(void*, int);
void StoreData(void*, char*, char*, char*, char*, int, int);
int main()
{
    EmployeeT emp1;
    EmployeeT emp2;

    ManagerT mgr1;

    StoreData(&emp1, "Sauronil", "Das", "dev", "abcd",5000, __EMPLOYEE__);
    PrintData(&emp1, __EMPLOYEE__);

    StoreData(&emp2, "Rohit", "Barboruah", "Accountant", "efd",  3000, __EMPLOYEE__);
    PrintData(&emp2, __EMPLOYEE__);

    StoreData(&mgr1, "Arijit", "Ghosh", "erwe",  "Assitant Manager", 3500, __MANAGER__);
    PrintData(&mgr1, __MANAGER__);

    return 0;
}

void StoreData(void *input,
               char* first_name, 
               char* last_name,
               char* dept,
               char* desg,
               int sal,
               int type)

{
    switch (type)
    {
        case __EMPLOYEE__:
            strcpy(((EmployeeT*)input)->f_name, first_name);
            strcpy(((EmployeeT*)input)->l_name, last_name);
            strcpy(((EmployeeT*)input)->department, dept);
           
           ((EmployeeT*)input)->salary= sal;
            break;
        case __MANAGER__:
            strcpy(((ManagerT*)input)->f_name, first_name);
            strcpy(((ManagerT*)input)->l_name, last_name);
            
            strcpy(((ManagerT*)input)->designation, desg);
            ((ManagerT*)input)->salary= sal;
            break;
        default:
            printf("No defination Provided");
            break;
    }
    

}

void PrintData(void* ptr, int type)

{
    switch (type)
    {
        case __EMPLOYEE__:

        printf("First Name of Employee  - %s\n", ((EmployeeT*)ptr)->f_name);
        printf("Last Name of Employee   - %s\n", ((EmployeeT*)ptr)->l_name);
        printf("Department of Employee  - %s\n", ((EmployeeT*)ptr)->department);
        printf("Salary of Employee      - %d\n", ((EmployeeT*)ptr)->salary);
        printf("\n");
        break;

        case __MANAGER__:

        printf("First Name of Manager   - %s\n", ((ManagerT*)ptr)->f_name);
        printf("Last Name of Manager    - %s\n", ((ManagerT*)ptr)->l_name);
        printf("Designation of Manager  - %s\n", ((ManagerT*)ptr)->designation);
        printf("Salary of Manager       - %d\n", ((ManagerT*)ptr)->salary);
        break;

        default:
            printf("error\n");
            break;
    }
}
