#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i, j;
    char temp;
    printf("\nEnter String: ");
    gets(str);
    printf("\nString is : %s", str);

    int len=strlen(str);
    i=0;
    j=len-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("\nReverse of String is : %s\n", str);
    return 0;
}
