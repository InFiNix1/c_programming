//Display Prime Number From A Provided Range
#include<stdio.h>
int main()
{
    int fn=1, cn, i, count=0, print_count=0;
    printf("\n\n\t\tEnter Floor Value : ");
    scanf("%d", &fn);
    int temp=fn;

    printf("\n\n\t\tEnter Ceil Value: ");
    scanf("%d", &cn);
    printf("\n\n");
    while(fn<=cn)
    {
        for(i=1; i<=fn; i++)
        {
            if(fn%i==0)
            {   
                ++count;
            }
        }
        if(count==2)
        {
            printf("%d\t", fn);
            ++print_count;
        }
    count=0;
    ++fn;
    }
    printf("\n");
    printf("\n\n\tTotal Number of Prime Number in The Range %d to %d is %d\n\n", temp, cn, print_count);
    
    return 0;
}
