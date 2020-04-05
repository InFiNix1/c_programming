#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int arr[10];
    int i;
    printf("Enter 10 Elements: \n");
    for(i=0; i<10; i++)
    {
        arr[i]=(rand()%(200 + 1 - 1)) + 1;
    }

    printf("Elemets Inserted are\n");

    for(i=0; i<10; i++)
    {
        printf("%d\t", arr[i]);
    }

    int large;
    large=arr[0];
    for(i=1; i<10; i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }

    printf("\nThe Largest Element in the Array is: %d\n", large);

    return 0;
}
