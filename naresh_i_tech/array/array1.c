/*To Print all The Garbage value of a Local Array*/

#include<stdio.h>
int main()
{
    int arr[5]; //Un-initialed Local array. 
    for(int i =0; i<5; i++)
    {
        printf("%x\n", arr[i]);
    }
    return 0;
}
