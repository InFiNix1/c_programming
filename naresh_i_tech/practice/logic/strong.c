#include<stdio.h>
int fact(int);
int main()
{
    int n, temp, r, sum=0;
    printf("Enter Value: ");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+fact(r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("\nIt is A STRONG NUMBER\n");
    }
    else
    {
        printf("\nIt is NOT A STRONG NUMBER\n");
    }


    return 0;
}

int fact(int x)
{
    int res;
    if(x==1)
    {
        res=1;
    }
    else
    {
        res=x*fact(x-1);
    }

    return res;
}
