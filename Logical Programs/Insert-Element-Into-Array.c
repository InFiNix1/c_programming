#include<stdio.h>
#include<stdlib.h>

int* create_array(int);
int* insert_element(int* arr, int ele, int pos);

int size;
int main()
{
    int ele, pos;
    printf("\nEnter The Size of the Array: ");
    scanf("%d", &size);

    int* arr=create_array(size);

    for(int i=0; i<size; i++)
    {
        scanf("%d", (arr+i));
    }

    printf("\nEnter New Element Value To Insert Into Array: ");
    scanf("%d", &ele);
    printf("\nEnter Position: ");
    scanf("%d", &pos);
    printf("\n");

    printf("Array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", *(arr+i));
    }
    printf("\n");
    arr=insert_element(arr, ele, pos);

    printf("New Array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", *(arr+i));
    }
    printf("\n");
    return 0;
}

int* create_array(int size)
{
    int* arr=(int*)calloc(size, sizeof(int));
    return arr;
}

int* insert_element(int* arr, int ele, int pos)
{
    size++;
    arr=(int*)realloc(arr, size*sizeof(int));
    for(int i=size-1; i>=pos-1; i--)
    {
        *(arr+i+1)=*(arr+i);

    }
    *(arr+pos-1)=ele;
    return arr;

}
