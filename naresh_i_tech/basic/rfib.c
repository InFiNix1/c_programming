#include<stdio.h>
int fib(int);
int main()
{
    int n, res, i;
    printf("Enter Nth Range For Fibonacci Series: ");
    scanf("%d", &n);
    printf("\n");
    for(i=0; i<n; i++)
    {
        res=fib(i);
        printf("%d\t", res);
    }
    printf("\n");
    return 0;
}

int fib(int x)
{
    int res;
    if(x==0)
    {
        res=0;
    }
    else if(x==1)
    {
        res=1;
    }
    else
    {
        res=fib(x-1) + fib(x-2);
    }
    return res;
}
