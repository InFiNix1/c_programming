#include<stdio.h>

int main()
{
    int n, c;
    int a=0;
    int b=1;
    printf("\nEnter Till Nth term To Print: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        printf("%d\t", a);
        c=a+b;
        a=b;
        b=c;
    }

    printf("\n");
    return 0;
}
