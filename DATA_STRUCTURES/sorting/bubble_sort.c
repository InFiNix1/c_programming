#include<stdio.h>
#define N 10
int main()
{
    int arr[N];
    int count=0;    
    printf("\nEnter Elements Into The Array: ");
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray Elemets Are: ");
    for(int i=0; i<N; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<N-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                count++;
            }
        }
    }


    printf("\nAfter Sorting Elemets are: ");
    for(int i=0; i<N; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nNumber of Swaps Occured In the List: %d\n\n", count);
    return 0;
}
