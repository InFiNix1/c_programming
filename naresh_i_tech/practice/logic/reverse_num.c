#include<stdio.h>
int main()
{
    int n, temp, r;
    int sum=0;
    printf("Enter Number: ");
    scanf("%d", &n);
    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("\nReverse of %d is %d and PALINDROME\n", temp, sum);
    }
    else    
    {
        printf("\nReverse of %d is %d and NOT A PALINDROME\n", temp, sum);
    }
    return 0;
}
