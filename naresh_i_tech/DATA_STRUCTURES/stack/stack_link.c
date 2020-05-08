#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node* top=NULL;

void Pop();
void Push();
void Display();
int main()
{
    printf("\n\n\tSTACK IMPLEMENTATION USING SINGLE LINKED LIST\n");
    while(1)
    {
        int choice;
        printf("\n 1. Push Element Onto Stack");
        printf("\n 2. Pop Element From Stack");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: Push();
                break;
            case 2: Pop();
                break;
            case 3: Display();
                break;
            case 4: printf("\n\t\tTASK FAILED SUCCESSFULLY\n");
                    exit(0);
                    break;
            default: printf("\nInValid Option\n");
                     break;
        }

    }
    return 0;
}

void Push()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    printf("\nEnter Value: ");
    scanf("%d", &temp->data);
    temp->link=top;
    top=temp;
}

void Pop()
{
    if(top==NULL)
    {
        printf("\nStack Is Empty\n");
    }
    else
    {
        struct node* temp;
        temp=top;

        top=temp->link;
        temp->link=NULL;
        free(temp);
    }
}

void Display()
{
    if(top==NULL)
    {
        printf("\nStack is Empty\n");
    }
    else
    {
        struct node* temp;
        temp=top;

        while(temp!=NULL)
        {
            printf("|%d|\n", temp->data);
            printf(" ----\n");
            temp=temp->link;
        }
    }
}
