#include<stdio.h>
#include<stdlib.h>

int front=0;
int rear=0;

int* Queue;

void init();
void Append();
void Delete();
void Display();

int main()
{   
    init();
    int choice;
    printf("\n\t\tDynamic Queue Implementation\n");
    while(1)
    {
        printf("\n1. Append");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Quit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: Append();
                break;
            case 2: Delete();
                break;
            case 3: Display();
                break;
            case 4: exit(0);
                    break;
            default: printf("\nInvalid Choice\n");
                     break;
        }
    }
    return 0;
}

void Append(void)
{
    int ele;
    printf("\nEnter Value: ");
    scanf("%d", &ele);
    rear++;
    Queue=(int*)realloc(Queue, rear*sizeof(int));
    *(Queue+(rear-1))=ele;
}

void Delete()
{
    if(rear==front)
    {
        printf("\nThe Queue is Empty\n");
    }
    else
    {
        for(int i=1; i<rear; i++)
        {
          *(Queue+(i-1))=*(Queue+(i));
        }
        rear--;
        Queue=(int*)realloc(Queue, rear*sizeof(int));
    }
}

void init()
{
    Queue=(int*)calloc(rear, sizeof(int));
}

void Display()
{
    if(rear==front)
    {
        printf("\nQueue is Empty\n");
    }
    for(int i=0; i<rear; i++)
    {
        printf("%d<--", *(Queue+(i)));
    }
    printf("\n");
}
