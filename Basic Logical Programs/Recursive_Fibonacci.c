#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("\nEnter Till Nth Term: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int res=fib(i);
        printf("%d\t", res);
    }
    printf("\n");

    return 0;
}

int fib(int n)
{
    int res;;
    if(n==0)
    {
        res=0;
    }
    else if(n==1)
    {
        res=1;
    }
    else
    {
        res=fib(n-1) + fib(n-2);
    }
    return res;
}
