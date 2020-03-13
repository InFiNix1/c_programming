/*Program to Find Factorial of a Given Number*/

//Post Decrement Logic
#include<stdio.h>
int main()
{
    int n, i, fact=1;
    printf("\n\n\tFACTORIAL PROGRAM");
    printf("\n\tEnter The Value of N: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--)
    {
        fact=fact*i;
    }
    printf("\n\tThe Factorial of %d is %d\n", n, fact);
    return 0;
}
