#include<stdio.h>

int StringLength(char x[]);
int main()
{
    char str[20];
    int len;
    printf("\nEnter A String: ");
    gets(str);
    len=StringLength(str);

    printf("\nLength: %d\n", len);
    return 0;
}

int StringLength(char x[])
{
    int i=0;
    while(x[i]!='\0')
    {
        i++;
    }
    return i;
}
