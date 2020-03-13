/*Program to Find Sum of Digits
 * e.g - 1234 = 1+2+3+4 = 10*/

#include<stdio.h>

int main()
{
    int n1, n, r, sum=0;
    printf("\n\tEnter Number: ");
    scanf("%d", &n);
    n1=n;

    while(n>0)
    {
        
        r = n%10; //Gets The Last Digit, Mod Operator gives Last Digit
        sum = sum+r;

        n=n/10; //Divide Operation Gives The Final Remaining Digits

    }

    printf("\n\tThe Sum of Digits of Digit %d is %d\n", n1, sum);
    return 0;
}
