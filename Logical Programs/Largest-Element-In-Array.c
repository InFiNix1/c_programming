#include<stdio.h>
#include<stdlib.h>

int* create_array(int);
int main()
{
    int size;
    printf("\nHow Many Elemets You Want to Add?\nEnter Value:  ");
    scanf("%d", &size);

    int* arr=create_array(size);


    printf("\nEnter Elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", (arr+i));
    }

    int largest=*(arr+0);
    for(int i=1; i<size; i++)
    {
        if(largest<*(arr+i))
        {
            largest=*(arr+i);
        }
    }

    printf("\nLargest Element is The Array: %d\n", largest);
    return 0;
}

int* create_array(int size)
{
    int* arr=(int*)calloc(size, sizeof(int));

    return arr;
}
