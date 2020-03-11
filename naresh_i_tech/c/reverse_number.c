//Printing Reverse of A Given Number

#include<stdio.h>
int main()
{
    int n, temp, r, sum=0;
    printf("\nEnter Value: ");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }

    printf("Reverse of %d is %d\n", temp, sum);
    return 0;
}
