#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node* root=NULL;

int Length();
int len;

void Append();
void add_at_begin();
void add_at_after();
void Display();
void swap();
void reverse();
void delete();
void delete_first_node();

int main()
{
    int choice;
    printf("\n\t\tSINGLE LINKED LIST IMPLEMENTATION\n");
    while(1)
    {
        printf("\n 1. Append");
        printf("\n 2. Add At Begining");
        printf("\n 3. Add at After");
        printf("\n 4. Delete Node");
        printf("\n 5. Swap Nodes");
        printf("\n 6. Reverse List");
        printf("\n 7. Length");
        printf("\n 8. Display");
        printf("\n 9. Exit");

        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);



        switch(choice)
        {
            case 1: Append();
                    break;
            case 2: add_at_begin();
                    break;
            case 3: add_at_after();
                    break;
            case 4: delete();
                    break;
            case 5: swap();
                    break;
            case 6: reverse();
                    break;
            case 7: Length();
                    printf("\nNumber of Nodes in List: %d\n", len);              
                    break;
            case 8: Display();
                    break;
            case 9: printf("\nTask Failed Successfully\n");
                    exit(0);
                    break;
            default: printf("\nInvalid Option\n");
                     break;
        }
    }

    return 0;
}

void Append(void)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    printf("\nEnter Value: ");
    scanf("%d", &temp->data);

    if(root==NULL)
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
    temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;

    printf("\nEnter Value: ");
    scanf("%d", &temp->data);

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

int Length()
{
    int count=0;

    struct node* temp;
    temp=root;

    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }

    len=count;
    return len;
}

void add_at_after()
{
    int loc;
    printf("\nEnter Location: ");
    scanf("%d", &loc);

    if(loc>len)
    {
        printf("\nThe List has Only %d Elements", len);
    }
    else
    {
        struct node* temp;
        struct node* p;
        int i=1;
        p=root;
        temp=(struct node*)malloc(sizeof(struct node*));
        temp->link=NULL;

        printf("\nEnter Value: ");
        scanf("%d", &temp->data);

        while(i<loc)
        {
            p=p->link;
            ++i;
        }
        temp->link=p->link;
        p->link=temp;
    }
}

void Display()
{
    struct node* temp;
    temp=root;

    if(temp==NULL)
    {
        printf("\nThe List Is Empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->", temp->data);
            temp=temp->link;
        }
        printf("NULL\n");

    }
}

void delete()
{
    int loc;
    printf("\nEnter Location to Delete: ");
    scanf("%d", &loc);

    struct node* temp;

    if(loc>Length())
    {
        printf("\nInvalid Location. The List Contains only %d elements", len);
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
        p=root;
        struct node* q;
        int i=1;
        while(i<loc-1)
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

void swap()
{
    int i=1;
    int loc;
    struct node* p;
    struct node* q;
    struct node* r;
    p=root;

    printf("\nEnter Location To Swap. **Note- Swapping will be done with right adjacent node: ");
    scanf("%d", &loc);

    if(loc==1)
    {
        q=p;
        r=q->link;
        q->link=r->link;
        r->link=q;
        root=r;
    }
    else
    {

        while(i<loc-1)
        {
            p=p->link;
            i++;
        }

        q=p->link;
        r=q->link;

        q->link=r->link;
        r->link=q;
        p->link=r;
    }
}

void reverse()
{
    int i, j;
    struct node* p;
    struct node* q;
    int len=Length();
    i=0;
    j=len-1;
    p=q=root;

    while(i<j)
    {
        int k=0;
        while(k<j)
        {
            q=q->link;
            k++;
        }
        int temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++;
        j--;

        p=p->link;
        q=root;
    }
}
