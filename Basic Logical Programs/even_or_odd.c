#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter Number: ");
    scanf("%d", &n);

    if(n%2==0)
    {
        printf("\nThe Number is Even\n");
    }
    else
    {
        printf("\nThe Number is Odd\n");
    }
    return 0;
}
