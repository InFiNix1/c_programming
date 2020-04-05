#include<stdio.h>
int main()
{
    int l, i;
    int n=1;
    printf("Enter Limit: ");
    scanf("%d", &l);
    printf("\n");
    while(n<=l)
    {
        int sum=0;
        for(i=1; i<n; i++)
            if(n%i==0)
            {
                sum=sum+i;
            }
        if(sum==n)
        {
            printf("%d\t", n);
        }
    ++n;
    }

    printf("\n");
    return 0;
}
