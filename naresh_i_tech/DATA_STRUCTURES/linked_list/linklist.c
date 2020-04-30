#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node* root= NULL;

int len;

void delete();
void Display();
void append();
int length();
void add_at_begin();
void add_at_after();
void delete();
int main()
{
    int ch;
    while(1)
    {
        printf("Single Linked List Operations: \n");
        printf("\n\n1. Append");
        printf("\n2. Add at Begining");
        printf("\n3. Add at After");
        printf("\n4. Length");
        printf("\n5. Display");
        printf("\n6. Delete");
        printf("\n7. Quit\n\n");
        printf("\n\n Enter Your Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1 : append();
                break;
            case 2 : add_at_begin();
                break;
            case 3: add_at_after();
                break;
            case 4 : len=length();
                     printf("\nLength is %d\n", len);
                break;
            case 5 : Display();
                break;
            case 6 : delete();
                break;
            case 7 : exit(0);
                     break;
        }
    }
    return 0;
}

void append(void)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("\nEnter Node Data: ");
    scanf("%d", &temp->data);

    temp->link=NULL;

    if(root == NULL)
    {
        root=temp;
    }
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }

}

void add_at_begin()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node*));

    printf("\nEnter Node Data: ");
    scanf("%d", &temp->data);

    temp->link=NULL;

    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->link=root;
        root=temp;
    }
}

int length()
{
    struct node* temp;

    int count=0;
    temp=root;

    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}

void Display()
{
    struct node* temp;
    temp=root;

    if(temp==NULL)
    {
        printf("\nList is Empty\n\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d -->", temp->data);
            temp=temp->link;
        }

        printf("\n");
    }
}

void add_at_after()
{
    struct node* temp;
    struct node* p;

    int loc;
    int i=1;
    int len;
    printf("\nEnter Location: ");
    scanf("%d", &loc);

    len=length();

    if(loc>len)
    {
        printf("\nIvalid Location.\nThe List Contains %d Elements\n", len);
    }
    else
    {
        p=root;
        while(i<loc)
        {
            p=p->link;
            i++;
        }

        temp=(struct node*)malloc(sizeof(struct node));

        printf("\nEnter Element: ");
        scanf("%d", &temp->data);

        temp->link= p->link;
        p->link=temp;

    }
}

void delete()
{
    struct node* temp;
    int loc;

    printf("\nEnter Location to delete: ");
    scanf("%d", &loc);

    if(loc>length())
    {
        printf("\nIvalid Location");
    }
    else if(loc==1)
    {
        temp=root;

        root=temp->link;

        temp->link=NULL;
        free(temp);

    }
    else
    {
        struct node* p;
        struct node* q;
        p=root;
        int i=1;

        while(i<loc)
        {
            p=p->link;
            i++;
        }
        q=p->link;

        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}
