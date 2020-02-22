#include<stdio.h>

int main()
{
    int a = 10, b = 20, c;

    c = a++ * --b;

    int x = 5;

    x = x++ + ++x;
    //Should print 11 19 190
    printf("\nThe value of\n a: %d\n b: %d\n c: %d",a,b,c);
    //Shoul print 13
    printf("\nThe value is : %d\n ", x) ;

    int p = 2 , q = 3;

    q = p++ + q--;
    p = p-- + ++q;
    q = ++p + --q;
    //Should print 8 and 12
    printf("\n\nValues of P : %d and Q : %d\n", p, q);

return 0;


}

