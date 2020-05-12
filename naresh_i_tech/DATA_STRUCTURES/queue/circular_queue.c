#include<stdio.h>

#include<stdlib.h>

#define N 10

int front=-1;
int rear=-1;

int cqueue[N];

int main()
{

    return 0;
}

void push()
{
    if(front==-1 && rear ==-1)
    {
        front=rear=0;
        cqueue[rear]=ele;
    }
    else if((rear+1)%N==front)
    {
        printf("\nStack is Full")
    }
    else
    {
        rear=(rear+1)%N;
        cqueue[rear]=ele;
    }
}

void pop()
{  

    if(front==-1 && rear ==-1)
    {
        printf("\nEmpoty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%N;
    }

}
