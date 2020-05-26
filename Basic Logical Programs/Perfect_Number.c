#include<stdio.h>

int main()
{
    int n, sum=0, i;
    printf("\nEnter Value: ");
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
        printf("\nIt is a Perfect Number\n");
    }
    else
    {
        printf("\nIt is NOT a Perfect Number\n");
    }

    return 0;
}
