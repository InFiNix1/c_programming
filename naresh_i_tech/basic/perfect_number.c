#include<stdio.h>

int main()
{
    int n, i, sum=0;
    printf("\nEnter The Number to Check For Perfect Number: ");
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum = sum + i;
        } 
    }
    if(n==sum)
    {
        printf("\nThe Number %d is A Perfect Number\n", n);
    }
    else 
    {
        printf("\nThe Number %d is NOT a Perfect Number\n", n);
    }
    return 0;
}
