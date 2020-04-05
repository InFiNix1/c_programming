#include<stdio.h>
int StringLength(char* arr);
int main()
{
    char arr[20];
    printf("\nEnter String: ");
    gets(arr);
    printf("\nThe String Inserted is: %s\n", arr);
    int len=StringLength(&arr);
    printf("\nThe Length of The String is: %d\n", len);

    return 0;
}

int StringLength(char* arr)
{
    int i=0;
    while(*(arr+i)!='\0')
    {
        ++i;
    }
    return i;
}
