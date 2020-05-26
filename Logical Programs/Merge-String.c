#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];
    printf("\nEnter String 1: ");
    gets(str1);
    printf("\nEnter String 2: ");
    gets(str2);
    int len1, len2;
    len1=strlen(str1);
    len2=strlen(str2);
    char c=32;
    str1[len1]=c;
    int i;
    for(i=0; i<=len2; i++)
    {
        str1[i+(len1+1)]=str2[i];
    }

    printf("\nMerged String %s\n", str1);
}
