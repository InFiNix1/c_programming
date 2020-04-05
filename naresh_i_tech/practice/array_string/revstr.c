#include<stdio.h>
#include<string.h>
int main()
{
    char arr[20];
    printf("Enter A String: ");
    scanf("%s", arr);

    int i=0, j;

    j=strlen(arr);

    while(i<j)
    {
        char temp=arr[i];
        arr[i]=arr[j-1];
        arr[j-1]=temp;
        i++;
        j--;

    }

    printf("\nReverse of String is: %s\n", arr);
    return 0;
}
