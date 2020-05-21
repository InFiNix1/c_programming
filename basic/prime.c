//Prime Number
#include<stdio.h>
int main()
{
    int n, i, count=0;
    printf("\n\n\t\tEnter Postive Integer Value: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            ++count;
        }
    }
    if(count==2)
    {
        printf("\n\t\tIt is A PRIME NUMBER\n");
    }
    else
    {

        printf("\n\t\tIt is NOT A PRIME NUMBER\n");
    }
    return 0;
}
