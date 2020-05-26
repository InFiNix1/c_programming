#include<stdio.h>

int main()
{
    int n, r;
    int sum=0;

    printf("\nEnter Number: ");
    scanf("%d", &n);

    int temp=n;

    while(temp>0)
    {   
        r=temp%10;

        int i;
        int fact=1;

        for(i=1; i<=r; i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;

        temp=temp/10;
    }

    if(n==sum)
    {
        printf("\nIt is A STRONG NUMBER\n");
    }
    else
    {
        printf("\nIt is NOT A STRONG NUMBER\n");
    }
    return 0;
}
