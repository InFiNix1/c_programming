#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];

    char str_[20];
    int i=0, j;

    printf("\nEnter String: ");
    gets(str);

    strcpy(str_, str);

    j=strlen(str);

    j=j-1;

    while(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }

    printf("\nReverse of %s is %s\n", str_, str);
    return 0;
}
