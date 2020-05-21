/*To check a number is even or odd */

#include<stdio.h>

main()
{
    int x;
    printf("\nPlease Enter a Number: ");
    scanf("%d", &x);

    if(x%2==0){
        printf("The Number is Even\n");
    }
    else {
        printf("The Number is Odd\n");
    }
}
