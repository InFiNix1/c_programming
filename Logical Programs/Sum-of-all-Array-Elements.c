#include<stdio.h>
#include<stdlib.h>

int* create_array(int);
int main()
{
    int size;
    int sum=0;
    printf("\nHow Many Elemets You Want to Add?\nEnter Value:  ");
    scanf("%d", &size);

    int* arr=create_array(size);


    printf("\nEnter Elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", (arr+i));
    }

    for(int i=0; i<size; i++)
    {
        sum=sum+*(arr+i);
    }

    printf("\nSum of Array: %d\n", sum);

    return 0;
}

int* create_array(int size)
{
    int* arr=(int*)calloc(size, sizeof(int));

    return arr;
}
