#include<stdio.h>
int main()
{
    printf("\n");
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=i; j>=1; j--)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}
