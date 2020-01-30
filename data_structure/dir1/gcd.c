#include<stdio.h>

int main()
{
    int x, y, m, n;
    scanf("%d %d/n", &x, &y);

    //Assumeing x>0 && y>0
    m=x; n=y;

    while(m!=n)
    {
        if (m>n)
            m=m-n;
        else
            n=n-m;
        
    }
    printf("/n%d/n", n);
}

