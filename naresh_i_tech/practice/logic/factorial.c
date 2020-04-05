#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter Value: ");
    scanf("%d", &n);
    int fact=1;
    for(i=n; i>=1; i--)
    {
        fact=fact*i;
    }
    printf("\nFactorial of %d! is %d\n", n, fact);
    return 0;    
}
