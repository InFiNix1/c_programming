/*Recursive Program To Find Factorial*/
#include<stdio.h>
int fact(int n);
int main()
{
    int n, result;
    printf("\nEnter ValueL: ");
    scanf("%d", &n);
    result = fact(n);
    printf("\nFactorial of %d is %d\n", n, result);
    return 0;
}
int fact(int n)
{
    int result;
    if(n==0)
    {
        result = 1;
    }
    else
    {
        result = n * fact(n-1);
    }
    return result;
}

