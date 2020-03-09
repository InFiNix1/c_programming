/*To Check STRONG NUMBER FROM A PROVIDED RANGE*/

#include<stdio.h>
int main()
{
    int fn, cn, temp, i, r, fact, sum=0;
    printf("\n\n\tEnter Floor Value: ");
    scanf("%d", &fn);
    printf("\n\n\tEnter Ceil Value: ");
    scanf("%d", &cn);
    printf("\n\t\tThe VALUES ARE\n\n");
    while(fn<=cn)
    {
        temp=fn;

        while(fn>0)
        {
            r=fn%10;
            fact=1;
            for(i=r; i>=1; i--)
            {
                fact=fact*i;
            }
            sum=sum+fact;
            fn=fn/10;
        }

        if(temp==sum)
        {
            printf("%d\t", temp);
        }
        fn=temp;
        ++fn;
        sum=0;
    }
    printf("\n");

    return 0;
}
