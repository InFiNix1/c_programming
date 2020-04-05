#include<stdio.h>
int main()
{
    int n, temp, r, sum=0;
    printf("Enter Number: ");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10 + r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("\nIt is A PALINDROME\n");
    }
    else
    {
        printf("\nIt is NOT A PALINDROME\n");
    }
    return 0;
}
