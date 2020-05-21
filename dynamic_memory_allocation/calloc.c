#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);

    int* arr;
    int i;

    arr=(int*)calloc(n, sizeof(int));

    if(arr==NULL)
    {
        printf("\nAddress Not Assigned");
    }
    else
    {
        printf("\nEnter Values: ");
        for(i=0; i<n; i++)
        {
            printf("\n%d", *(arr+i));
        }
    }
    printf("\n");
    return 0;
}
