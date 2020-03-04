/*Program to Find The Factorial of A Given Number*/
//Using Post Increment Logic
#include<stdio.h>
int main()
{
    int n, i, fact=1;
    printf("\n\n\n\n\t\t\tFACTORIAL PROGRAM\n");
    printf("\n\n\t\t\tEnter The Value of N To Find its FACTORIAL : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("\n\t\t\tThe Factorial of %d is %d\n", n, fact);
    return 0;
}
