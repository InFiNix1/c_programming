/*STACK DATA STRUCTUTE
 * Implementaion Using 
 * Stack Array */

#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
/*Function Prototypes*/
int isFull(void);
int isEmpty(void);
void push(int);
int pop(void);
void traverse(void);
void peek(void);
/*Global Variables --- Pre Processing*/
int stack[CAPACITY];
int top= -1;

int main()
{
    while(1)
    {
        int choice;
        int item;
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Traverse\n");
        printf("5. Quit\n");
        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : printf("\nEnter Element to Push: ");
                     scanf("%d", &item);
                     push(item);
                     break;
            case 2 : item = pop();
                     if(item==0)
                     {
                         printf("\nStack is Underflow\n");
                     }
                     else
                     {
                         printf("\nPopped Item: %d\n", item);
                     }
                     break;
            case 3 : peek();
                     break;
            case 4 : traverse();
                     break;
            case 5 : exit(0);
                     break;
            default : printf("\nIvalid Input\n\n");
                      break;
        }
    }
    return 0;
}


void push(int ele)
{
    if(isFull())
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        top++;
        stack[top]=ele;
        printf("%d is Pushed\n", ele);
    }
}

int isFull(void)
{
    if(top==CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop(void)
{
    if(isEmpty())
    {
        printf("\nStack is Underflow");
        return 0;
    }
    else
    {
        return stack[top--]; //Here Top will be returned and then top is decremnted
    }
}

int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void peek(void)
{
    if(isEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Peek Element: %d\n", stack[top]);
    }
}

void traverse(void)
{
    if(isEmpty())
    {
        printf("\nStack is Empty\n");
    }
    else
    {
        int i;
        printf("Stack elements: \n");
        for(i=0; i<=top; i++)
        {
            printf("%d\t", stack[i]);
        }
    }
}
