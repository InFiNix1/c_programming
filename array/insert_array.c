#include<stdio.h>
int main()
{
    int a[20], na, b[20], nb, index, i;

    printf("\nEnter Size of Array A[]: ");
    scanf("%d", &na);

    for(i=0; i<na; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter Size of Array B[]: ");
    scanf("%d", &nb);

    for(i=0; i<nb; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("\nEnter The Index where you want to append Array B into Array A: ");
    scanf("%d", &index);
    index=index-1; //Made Human Readable Indexing

    //Shifting array A
    for(i=na-1; i>=index; i--)
    {
        a[i+nb]=a[i];
    }
    for(i=0; i<nb; i++)
    {
        a[i+index]=b[i];
    }
    printf("\n");
    for(i=0; i<na+nb; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}

