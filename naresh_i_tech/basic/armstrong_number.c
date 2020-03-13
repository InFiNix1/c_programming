#include<stdio.h>
int main()
{
    int n, temp, r, cube , sum=0;
    printf("\n\tEnter The Value: ");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        cube=r*r*r;
        sum=sum+cube;
        n=n/10;
    }

    if(temp==sum)
    {
        printf("\n\t%d is an ARMSTRONG NUMBER\n", temp);
    }
    else
    {
        printf("\n\t%d is NOT an ARMSTRONG NUMBER\n", temp);
    }
    return 0;
}
