#include<stdio.h>

int main()
{
    int n, r;
    int sum=0;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    int temp=n;
    while(n>0)
    {
        r=n%10;

        sum=sum*10+r;

        n=n/10;
    }

    if(temp==sum)
    {
        printf("\nIt is A PALINDROME NUMBER\n");
    }
    else
    {
        printf("\nIt is NOT A PALINDROME NUMBER\n");
    }
    return 0;
}
