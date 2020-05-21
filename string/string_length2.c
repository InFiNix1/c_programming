#include<stdio.h>
int StringLength(char x[]);
int main()
{
    char str[30];
    int len;
    printf("\nString Input: ");
    gets(str);
    len=StringLength(str);
    printf("\nLength of String is %d\n", len);
    return 0;
}

int StringLength(char x[])
{
    int i=0;
    while(x[i]!='\0')
    {
        ++i;
    }
    return i;
}
