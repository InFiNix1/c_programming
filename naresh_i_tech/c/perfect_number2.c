#include<stdio.h>

int main()
{
    int n = 1;
    int i;
    while(1000)
    {
        int sum=0;
        
        for(i=1; i<n; i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        if(n==sum)
        {
            printf("\n%d\n", n);
        }

    ++n;
        
    }
    return 0;
}
