#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b=temp;
}

void randomize(int arr[], int n) 
{
    srand(time(NULL));
    int i;

    for(i=n-1; i>0; i--)
    {
        int j = rand()%(i+1);
            swap(&arr[i], &arr[j]);
    }
}

int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    char *songs[]={
        "Wonderwall", "Mama, I'm Coming Home",
        "Cool Kids", "Move Along", "Stay Together For The Kids",
        "Love Somebody", "With Me", "Blame It On Me", "Stairway To Heaven", "Someday I'll Be Saturday Night"
    };

    printf("\nBefore Shuffle\n");

    int i;
    for(i=0; i<n; i++) {
        
        int index = arr[i];
        printf("%2d - %s\n", i+1, songs[index]);
        }

    printf("\nAfter Shuffle\n");
    randomize(arr, n);
    for(i=0; i<n; i++) {
        int index = arr[i];
        printf("%2d - %s\n", i+1, songs[index]);
    }

    return 0;
}

