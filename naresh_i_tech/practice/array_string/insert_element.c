#include<stdio.h>
int main()
{
    int arr[20];
    int i, index, key, n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
       printf("%d\t", arr[i]);
    }

    printf("\nEnter Element: ");
    scanf("%d", &key);
    printf("\nEnter Index: ");
    scanf("%d", &index);
    index=index-1;

    for(i=n-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[index]=key;
    printf("\nAdjusted Array: ");
    for(i=0; i<=n; i++)
    {
       printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
