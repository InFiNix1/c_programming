#include<stdio.h>

int main()
{
    int n, i, sum=1;
    printf("\nEnter Number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum=sum*i;
    }

    printf("\nFactorial is %d! = %d\n", n, sum);
}
