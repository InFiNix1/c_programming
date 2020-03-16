#include<stdio.h>
int main()
{
    char str[30];
    printf("\nEnter String: ");
    gets(str);

    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        ++i;
    }

    printf("\nLower Cased String: %s\n", str);
    
    return 0;
}
