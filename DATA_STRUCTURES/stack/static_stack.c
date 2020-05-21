#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 10

int stack[CAPACITY];
int top=-1;

void Display(void);
void Push(int);
int Pop(void);
void Peek(void);
void Display(void);
int isEmpty(void);
int isFull(void);

int main()
{
    int choice;
    int ele;
    while(1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Quit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);


        switch(choice)
        {
            case 1 : printf("\nEnter The Element: ");
                     scanf("%d", &ele);
                     Push(ele);
                     break;
            case 2 : ele=Pop();
                     printf("\nThe Element Popped: %d\n", ele);
                     break;
            case 3 : Peek();
                     break;
            case 4 : Display();
                     break;
            case 5 : exit(0);
                     break;
            default : printf("\nInvalid Option\n");
                      break;
        }
    }
    return 0;
}


void Push(int ele)
{
    if(isFull())
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        top++;
        stack[top]=ele;
        printf("\n%d has been Pushed\n", ele);
    }
}

int isFull()
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

int Pop()
{
    if(isEmpty())
    {
        printf("\nStack is Empty\n\n");
        return 0;
    }
    else
    {
        int ele=stack[top];
        top--;
        return ele;
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

void Peek()
{
    if(isEmpty())
    {
        printf("\nThe Stack is Empty\n\n");
    }
    else
    {
        int ele=stack[top];
        printf("\nTop Element on the Stack: %d\n", ele);
    }
}

void Display()
{
    if(isEmpty())
    {
        printf("\nStack is Empty\n\n");
    }
    else
    {
        int i;
        for(i=0; i<=top; i++)
        {
            printf("%d\t", stack[i]);
        }
        printf("\n");
    }
}
