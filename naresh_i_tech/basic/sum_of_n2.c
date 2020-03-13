#include<stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("\nEnter The Number N to Find Sum of N : ");
    scanf("%d", &n);
    
    sum = n*(n+1)/2;

    printf("\nThe Sum of %d numbers or Summation is %d\n", n, sum);
    
    return 0;
}
