/*To Check A Number is a Strong Number or Not*/

#include<stdio.h>
int main()
{
    int n, temp, i, r, fact, sum=0;
    printf("\n\n\tEnter Value Here: ");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=r; i>=1; i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }

    if(temp==sum)
    {
        printf("\n\tIt is a STRONG NUMBER\n");
    }
    else
    {
        printf("\n\tIt is NOT A STRONG NUMBER\n");
    }

    return 0;
}
