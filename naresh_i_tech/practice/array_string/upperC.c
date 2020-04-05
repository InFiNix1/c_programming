#include<stdio.h>
int main()
{
    char arr[20];
    printf("Enter String: ");
    scanf("%s", arr);

    int i=0;

    while(arr[i]!='\0')
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i]= arr[i] + 32;
        }
    ++i;    
    }

    printf("\nConverted String is: %s\n", arr);
    return 0;
}
