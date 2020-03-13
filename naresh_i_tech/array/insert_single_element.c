#include<stdio.h>
int main()
{
    int arr[20], n, i, key, index;
    printf("\nEnter Size of Array: ");
    scanf("%d", &n);

    printf("\nEnter %d Elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter element value to be inserted: ");
    scanf("%d", &key);

    printf("\nEnter Index Number where to insert: ");
    scanf("%d", &index);
    index=index-1;

    //Shifting Elemets To Make Space
    for(i=n-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[index]=key;
    printf("\n");
    for(i=0; i<=n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
