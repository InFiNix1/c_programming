#include<stdio.h>

int main()
{
    int n, i;
    int count=0;

    printf("\nEnter Number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        printf("\nIt is A PRIME NUMBER\n");
    }
    else
    {
        printf("\nIt is NOT a PRIME NUMBER\n");
    }
    return 0;
}
