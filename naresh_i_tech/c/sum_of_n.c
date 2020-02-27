#include<stdio.h>

main()
{
    int n, i, sum =0;
    printf("\nEnter The Value for n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }

    printf("\nThe Sum of %d numbers is: %d \n", n, sum);
}
