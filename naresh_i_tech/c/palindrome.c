//Program to Check A Number is Plaindrome or NOT

#include<stdio.h>
int main()
{
    int n, ReverseN=0, r, temp;
    printf("\n\n\t\tEnter Number To Be Checked : ");
    scanf("%d", &n);
    temp=n;

    while(n!=0)
    {
        r = n%10;
        ReverseN = ReverseN*10 + r;
        n=n/10;

    }
    if(ReverseN==temp)
    {
        printf("\n\t\tIt Is A PALINDROME NUMBER\n");
    }
    else
    {
        printf("\n\t\tIt Is NOT A PALINDROME NUMBER\n");
    }
    return 0;
}
