//Pirapat jitcharoenwirakun 6210402470
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void frist_input(struct node **head,int n)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=n;

    new_node->next=*head;
    *head=new_node;
}

int find_jut(struct node **head,struct node **tail,int n)
{
    struct node *tmp = *head;
    for(int count=1;tmp;count++)
    {
        if(tmp->data >= n && count==1)
        {
            count=-1000;
            return count;
        }
        else if(tmp->data <= n && tmp->next != NULL )
        {
            tmp=tmp->next;
            if(tmp->data >= n)
            {
                return count;
            }
        }
        else if(tmp->data <= n && tmp->next == NULL)
        {
            count=1000;
            return count;
        }
    }
}

void Atend_input(struct node **head,int n)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *tmp;

    newnode->data=n;
    newnode->next=NULL;

    tmp=*head;

    while(tmp->next != NULL)
        tmp=tmp->next;

    tmp->next=newnode;
    
}

void mid_input(struct node **head,int n,int jut)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *tmp;

    tmp=*head;

    for(int nup=1;nup<jut;nup++)
    {
        tmp=tmp->next;
    }

    newnode->data=n;

    newnode->next=tmp->next;
    tmp->next=newnode;

}

void print_list(struct node *head)
{
    struct node *tmp;
    for(tmp=head;tmp;tmp=tmp->next)
        printf("%d\n",tmp->data);
}



int main()
{
    int n,i,jut,count=0;
    struct node *head=NULL;
    struct node *tail=NULL;

    // frist_input(&head,4);
    // frist_input(&head,5);
    // Atend_input(&head,20);
    // mid_input(&head,100,2);
    // find_jut(&head,&tail,1);
    // printf("%d",count);

    
    while(1)
    {
        scanf("%d",&n);
        count++;
        if (n==-1)
        {
            break;
        }
        else if (count==1)
        {
            frist_input(&head,n);
        }
        else if(count>1)
        {
            jut=find_jut(&head,&tail,n);
            if(jut==-1000)
            {
                frist_input(&head,n);
            }
            else if(jut==1000)
            {
                Atend_input(&head,n);
            }
            else
            {
                mid_input(&head,n,jut);
            }
        }
    }
    print_list(head);
}