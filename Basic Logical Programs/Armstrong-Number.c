#include<stdio.h>

int main()
{
    int n, r;
    int cube;
    int temp=n;
    int sum=0;
    printf("\nEnter Number: ");
    scanf("%d", &n);

    while(temp>0)
    {
        r=temp%10;
        cube=r*r*r;
        sum=sum+cube;
        temp=temp/10;
    }

    if(n==sum)
    {
        printf("\nArmstrong Number\n");
    }
    else
    {
        printf("\nNOT An Armstrong Number\n");
    }
    return 0;
}
