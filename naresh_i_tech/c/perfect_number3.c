#include<stdio.h>
int main()
{
    int i, n, sum =0;
    printf("\n\tEnter Value: ");
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(n==sum)
    {
        printf("\nIt is A PERFECT NUMBER\n");
    }
    else
    {
        printf("\nIt is NOT A PERFECT NUMBER\n");
    }
    return 0;
}
