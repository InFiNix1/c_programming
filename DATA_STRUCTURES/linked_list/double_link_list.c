#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* root=NULL;
void Delete();
void append();
void add_at_begin();
int length();
int len;
void Display();
void swap();
void add_at_after();
void reverse();
int main()
{
    printf("\n\t\tDOUBLE LINKED LIST IMPLEMENTATION\n");
    int choice;
    while(1)
    {
        printf("\n 1. Append");
        printf("\n 2. Add at Begining");
        printf("\n 3. Add at After Location");
        printf("\n 4. Length");
        printf("\n 5. Display");
        printf("\n 6. Delete");
        printf("\n 7. Swap");
        printf("\n 8. Reverse List");
        printf("\n 9. Quit");

        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: append();
                    break;
            case 2: add_at_begin();
                    break;
            case 3: add_at_after();
                    break;
            case 4: len=length();
                    printf("\nLength of The List is %d\n", len);
                    break;
            case 5: Display();
                    break;
            case 6: Delete();
                    break;
            case 7: swap();
                    break;
            case 8: reverse();
                    break;
            case 9: printf("\nTask FAILED SUCCESSFULLY\n");
                    exit(0);
            default: printf("\nInvalid Option\n");
                     break;
        }
    }
    return 0;
}
void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    printf("\nEnter Data: ");
    scanf("%d", &temp->data);
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node* p;
        p=root;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=temp;
        temp->left=p;
    }
}
void add_at_begin()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    printf("\nEnter Data: ");
    scanf("%d", &temp->data);
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->right=root;
        root->left=temp;
        root=temp;
    }
}
int length()
{
    int count=0;
    struct node* iter;
    iter=root;
    while(iter!=NULL)
    {
        count++;
        iter=iter->right;
    }
    return count;
}
void Display()
{
    struct node* iter;
    iter=root;
    if(iter==NULL)
    {
        printf("\nThe List is Empty\n");
    }
    else
    {
        while(iter!=NULL)
        {
            printf("|%d|-->", iter->data);
            iter=iter->right;
        }
        printf("NULL\n");
    }
}
void add_at_after()
{
    int loc;
    struct node* temp;
    printf("\nEnter Location to Inster After: ");
    scanf("%d", &loc);
    if(loc>length())
    {
        printf("\nInvalid Location\n");
        printf("\nThe List has %d Elements", len);
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->left=NULL;
        temp->right=NULL;
        printf("\nEnter Value: ");
        scanf("%d", &temp->data);
        struct node* p;
        p=root;
        int i;
        while(i<loc)
        {
            p=p->right;
            i++;
        }
        struct node* q;
        q=p->right;
        temp->right=p->right;
        q->left=temp;
        temp->left=p;
        p->right=temp;
    }
}

void Delete()
{
    struct node* temp;
    int loc;
    printf("\nEnter Location: ");
    scanf("%d", &loc);

    if(loc>length()) //when location is more than the size of the list
    {
        printf("\nInvalid Location");
        printf("\nThe List has %d Elements\n", len);
    }
    else if(loc==1) //when location is the first node
    {
        temp=root;
        if(temp->right==NULL)
        {
            root=NULL;
            free(temp);
        }
        else
        {
        struct node* p;
        p=temp->right;
        p->left=NULL;
        root=p;
        temp->right=NULL;
        free(temp);
        }
    }
    else if(loc<length()) //when location is in-between 1 - length of the list
    {
        struct node* p;
        p=root;
        struct node* q;
        struct node* r;
        int i=1;

        while(i<loc-1)
        {
            p=p->right;
            i++;
        }
        q=p->right;
        r=q->right;

        p->right=q->right;
        q->right=NULL;
        r->left=p;
        q->left=NULL;
        free(q);
    }
    else //When loc is the last node
    {
        struct node* p;
        struct node* q;

        p=root;
        int i=1;

        while(i<loc-1)
        {
            p=p->right;
            i++;
        }
        q=p->right;
        p->right=NULL;
        q->left=NULL;
        free(q);
    }
}

void swap()
{
    struct node* p;
    struct node* q;
    struct node* r;
    struct node* s;

    int i=1;
    int loc;
    p=root;

    printf("\nEnter Location: ");
    scanf("%d", &loc);
    if(loc==1)
    {
        q=p->right;
        r=q->right;

        p->right=r;
        r->left=p;
        q->right=p;
        q->left=NULL;
        root=q;
    }
    else if(loc>length())
    {  
        printf("\nLocation Invalid\n");
    }
    else if(loc==length())
    {
        printf("\nThere is No Adjacent Node to Swap Element With\n");
    }
    else if(loc==length()-1)
    {
        while(i<loc-1)
        {
            p=p->right;
            i++;
        }

        q=p->right;
        r=q->right;

        q->right=r->right;
        r->left=p;
        r->right=q;
        p->right=r;
        q->left=r;

    }
    else
    {
        while(i<loc-1)
        {
            p=p->right;
            i++;
        }

        q=p->right;
        r=q->right;
        s=r->right;

        q->right=s;
        s->left=q;
        r->left=p;
        r->right=q;
        p->right=r;
        q->left=r;
    }
}

void reverse()
{
    int i=1;
    int k=1;
    int j=length();

    struct node* p;
    struct node* q;
    p=root;
    q=root;

    while(k<j)
    {
        q=q->right;
        k++;
    }
    while(i<j)
    {
        int temp=p->data;
        p->data=q->data;
        q->data=temp;

        i++;
        j--;
        
        p=p->right;
        q=q->left;

    }
}
