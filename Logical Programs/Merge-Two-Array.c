#include<stdio.h>
#include<stdlib.h>

int* create_array(int size);

int size_a;
int size_b;
int main()
{
    int loc;
    printf("\nEnter Size of Array 1: ");
    scanf("%d", &size_a);
    int* arr_1=create_array(size_a);

    printf("\nEnter Elements Into Array 1: ");
    for(int i=0; i<size_a; i++)
    {
        scanf("%d", (arr_1+i));
    }


    printf("\nEnter Size of Array 2: ");
    scanf("%d", &size_b);
    int* arr_2=create_array(size_b);

    printf("\nEnter Elements Into Array 2: ");
    for(int i=0; i<size_b; i++)
    {
        scanf("%d", (arr_2+i));
    }

    printf("\nLocation To Merge Array 2 into Array 1: ");
    scanf("%d", &loc);

    size_a=size_a+size_b;

    arr_1=(int*)realloc(arr_1, size_a*sizeof(int));

    for(int i=size_a-1; i>=loc-1; i--)
    {
       *(arr_1+i+size_b)=*(arr_1+i);
    }
    for(int i=0; i<size_b; i++)
    {
        *(arr_1+i+loc-1)=*(arr_2+i);
    }
    printf("\nMerged Array: ");
    for(int i=0; i<size_a; i++)
    {
        printf("%d\t", *(arr_1+i));
    }
    printf("\n");

    return 0;
}

int* create_array(int size)
{
    int* arr=(int*)calloc(size, sizeof(int));
    return arr;
}
