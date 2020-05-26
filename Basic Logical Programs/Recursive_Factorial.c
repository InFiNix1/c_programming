#include<stdio.h>

int fact(int);
int main()
{
    int n;
    printf("\nEnter Number: ");
    scanf("%d", &n);

    int val=fact(n);

    printf("\nFactorail of %d!=%d\n", n, val);

    printf("\nSize of Int is %d\n", sizeof(val));
    return 0;
}

int fact(int x)
{
    int val;
    if(x==1)
    {
        val=1;;
    }
    else
    {
        val=x*fact(x-1);
    }
    return val;
}
