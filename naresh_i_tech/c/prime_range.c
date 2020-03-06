//Display Prime Number From A Provided
#include<stdio.h>
int main()
{
    int n=1, cn, i, count=0, print_count=0;
    printf("\n\n\t\tEnter Final Range Value: ");
    scanf("%d", &cn);
    while(n<=cn)
    {
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {   
                ++count;
            }
        }
        if(count==2)
        {
            printf("%d\t", n);
            ++print_count;
        }
    count=0;
    ++n;
    }
    printf("\n");
    printf("\n\n\tTotal Number of Prime Number in The Range 1 to %d is %d\n\n", cn, print_count);
    
    return 0;
}
