#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[20], arr2[10];
    printf("Enter String 1: ");
    scanf("%s", arr1);
    printf("\nEnter String 2: ");
    scanf("%s", arr2);

    int len1, len2, i;
    len1=strlen(arr1);
    len2=strlen(arr2);

    char c = 32;

    arr1[len1]=c;

    for(i=0; i<=len2; i++)
    {
        arr1[i+(len1+1)]=arr2[i];
    }
    printf("\nMergered String is %s\n", arr1);
    return 0;
}
