#include<stdio.h>
int main()
{
    int n, r;
    int sum=0;
    printf("Enter Digit: ");
    scanf("%d", &n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("\nSum of Digits = %d\n", sum);
    return 0;
}
