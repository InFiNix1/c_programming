#include<stdio.h>

int main()
{
    int n, r, sum=0;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    int temp=n;

    while(n>0)
    {
        r=n%10;

        sum = sum+r;
        n=n/10;
    }

    printf("\nSum of Digits of Digit %d = %d\n", temp, sum);
    return 0;
}
