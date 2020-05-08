/*Stack Implementation*/
//Dynamically
/*Author: Sauronil Das*/
#include<stdio.h>
#include<stdlib.h>
int isEmpty();
int Pop(int*);
void Push(int*, int);
void Display(int*);
void Peek(int*);
int top=0;
int main()
{
    int choice;
    int ele;
    printf("\n\t\t    <<<<<<<Initializing Stack>>>>>>>>");
    int* stack=(int*)calloc(top, sizeof(int));
    printf("\n\t\t       Initialization Complete\n");

    while(1)
    {
        printf("\n1. Press 1 to Push Element Into Stack");
        printf("\n2. Press 2 to Pop Element From Stack");
        printf("\n3. Press 3 to Peek Top Element of Stack");
        printf("\n4. Press 4 to Display all Element in Stack");
        printf("\n5. Press 0 To Exit\n");
        scanf("%d", &choice);


        switch(choice)
        {
            case 1 : printf("\nEnter Element: ");
                     scanf("%d", &ele);
                     Push(stack, ele);
                     break;
            case 2 : ele=Pop(stack);
                     if(ele!=0)
                     {
                         printf("\nElement Popped %d\n", ele);
                     }
                     else
                     {
                         printf("\nStack UnderFlow\n");
                     }
                     break;
            case 3 : Peek(stack);
                     break;
            case 4 : Display(stack);
                     break;
            case 0 : exit(0);
            default : printf("\nInvalid Option. Please Provide Valid Option\n");
                      break;
        }
    }
    return 0;
}

void Push(int* stack, int ele)
{
    top++;
    stack=(int*)realloc(stack, top*sizeof(int));
    *(stack+(top-1))=ele;
}

int Pop(int* stack)
{
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        int ele;

        ele=*(stack+(top-1));
        --top;
        stack=(int*)realloc(stack, top*sizeof(int));
        return ele;
    }
 
}

int isEmpty()
{
    if(top==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Display(int* stack)
{
    int i;
    printf("\nStack Elements: ");
    for(i=0; i<top; i++)
    {
        printf("%2d\t", *(stack+i));
    }
    printf("\n");
}

void Peek(int* stack)
{
    int ele;
    ele=*(stack+(top-1));
    printf("\nTop Element In The Stack is %d\n", ele);
}
