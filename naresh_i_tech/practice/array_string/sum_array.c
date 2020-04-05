#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    printf("Time is %ld\n", time(NULL));
    int arr[6];
    int i;
    int sum=0;
    int value;
    printf("Inserting 6 Random Elements within Range[1,6]: \n");
    srand(time(NULL));
    for(i=0; i<6; i++)
    {
        value=(rand()%(6+1 - 1))+1; //formula is rand()%(max_val +1 - min_val) + min_val
        arr[i]=value;
    }
    for(i=0; i<6; i++)
    {
        printf("%d\t", arr[i]);
    }

    for(i=0; i<6; i++)
    {
        sum=sum+arr[i];
    }

    printf("\nSum of all The Elemets Entered is %d\n", sum);
    return 0;
}
