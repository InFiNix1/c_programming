#include<stdio.h>
#include<stdlib.h>
//Stactic Queue
#define CAPACITY 10

int Queue[CAPACITY];
int front=0;
int rear=0;

void Insert(int);
void Delete();
void Display();

int main()
{
    int choice;
    int ele;
    printf("\t\tQueue Implementation\n");
    while(1)
    {
        printf("\n\n1. Insert Element into Queue");
        printf("\n2. Delete Element from Queue");
        printf("\n3. Display Queue List");
        printf("\n4. Exit");

        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: printf("\nEnter Element: ");
                    scanf("%d", &ele);
                    Insert(ele);
                    break;
            case 2: Delete();
                    break;
            case 3: Display();
                    break;
            case 4 : exit(0);
                     break;
            default : printf("\nInvalid Choice");
                      break;
        }
    }
    return 0;    
}

void Insert(int x)
{
    if(CAPACITY==rear)
    {
        printf("Queue is FULL\n");
    }
    else
    {
        Queue[rear]=x;
        ++rear;
    }
}

void Delete()
{
    if(rear==front)
    {
        printf("Queue is EMPTY\n");
    }
    else
    {
        for(int i=1; i<=rear; i++)
        {
            Queue[i-1]=Queue[i];
        }
        --rear;
    }
}

void Display()
{
    if(rear==front)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        for(int i=front; i<rear; i++)
        {
            printf("%d<--", Queue[i]);
        }
        printf("\n");
    }
}
