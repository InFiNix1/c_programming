#include<stdio.h>
int main()
{
    int n;
    printf("Enter Value: ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("\nIt is EVEN\n");
    }
    else
    {
        printf("\nIt is ODD\n");
    }
    return 0;
}
