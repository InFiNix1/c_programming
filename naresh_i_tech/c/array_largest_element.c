#include<stdio.h>
int main()
{
    int arr[7];
    int i;
    printf("\nEnter 8 Random Integers: \n");
    for(i=0; i<7; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    printf("\nThe Elements You Enter in Order are : \n");
    for(i=0; i<7; i++)
    {
        printf("%d\t", arr[i]);
    }

    //Logic For Finding The Largest Number
    int large;
    large=arr[0];
    for(i=1; i<7; i++ )
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }

    printf("\nThe Largest Element is %d\n", large);
    
    return 0;
}
