#include<stdio.h>

int main()
{
    int n, r;
    printf("\nEnter A Number: ");
    scanf("%d", &n);
    int temp=n;
    int sum=0;
    
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }

    printf("\nThe Reverse of %d is %d\n", temp, sum);
    return 0;
}
