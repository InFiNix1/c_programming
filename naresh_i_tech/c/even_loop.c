#include<stdio.h>

int main()
{
    int i = 1;

    while(i<=10){
        if(i%2==0){
            printf("i : %d\n", i);
        }
        ++i;
    }
}
