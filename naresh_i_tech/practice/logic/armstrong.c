#include<stdio.h>
int cube(int);
int main()
{
    int n=1, r;
    int res;
    while(n<10000)
    {
        int sum=0;
        int temp=n;
        while(n>0)
        {
            r=n%10;
            res=cube(r);
            sum=sum+res;
            n=n/10;
        }

        if(sum==temp)
        {
            printf("%d\t", sum);
        }
        n=temp;
        ++n;
    }
    printf("\n");
    return 0;
}

int cube(int n)
{
    int res;
    res=n*n*n;
    return res;
}
