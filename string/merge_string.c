#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];

    printf("\nEnter String 1: ");
    gets(str1);

    printf("\nEnter String 2: ");
    gets(str2);

    int l1, l2;
    int i;

    l1=strlen(str1);
    l2=strlen(str2);

    for(i=0; i<=l2; i++)
    {
        str1[l1+i]=str2[i];
    }

    printf("\nMerged String: %s\n", str1);

    

    return 0;
}
