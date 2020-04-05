#include<stdio.h>
int fact(int);
int main()
{
    int n, res;
    printf("Enter Value: ");
    scanf("%d", &n);
    res=fact(n);
    printf("\n%d! = %d\n", n, res);
    return 0;
}

int fact(int x)
{
    int res;
    if(x==0)
    {
        res=1;
    }
    else
    {
        res=x*fact(x-1);
    }
    return res;
}
