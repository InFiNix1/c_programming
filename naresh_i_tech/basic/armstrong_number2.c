/*To PRINT THE RANGE OF ARMSTRONG NUMBER*/

#include<stdio.h>
int main()
{
    int fn, cn, r, cube, sum, temp;
    printf("\n\tEnter Floor Value: ");
    scanf("%d", &fn);
    printf("\n\tEnter Ceil Value: ");
    scanf("%d", &cn);
    printf("\n----------------------------------\n");
    while(fn<=cn)
    {
        temp=fn;
        sum=0;
        while(fn>0)
        {
            r=fn%10;
            cube=r*r*r;
            sum=sum+cube;
            fn=fn/10;
        }
        fn=temp;
        if(fn==sum)
        {
            printf("%d\t", fn);
        }
        ++fn;
    }
    printf("\n");
    return 0;
}
