/*Program to Print A User Defined Range of Fibonacci Series*/

#include<stdio.h>
int main()
{
    int n, i, a=0, b=1, c;
    printf("\n\n\t\tEnter The Range to Be Printed : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("\n\t%d", a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");

    return 0;
}
