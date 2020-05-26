#include<stdio.h>

int main()
{
    int i, j, k, l, m=40;
    printf("\nEnter No. of Level: ");
    scanf("%d", &l);

    for(i=1; i<=l; i++)
    {
        for(j=1; j<=(m-i); j++)
        {
            printf(" ");
        }
        for(k=1; k<=((2*i)-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
