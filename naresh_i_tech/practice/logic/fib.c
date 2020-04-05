#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter Nth Range of Fibonacci Series: ");
    scanf("%d", &n);
    printf("\n");
    int a=0, b=1, c;
    for(i=1; i<=n; i++)
    {
        printf("%d\t", a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}
