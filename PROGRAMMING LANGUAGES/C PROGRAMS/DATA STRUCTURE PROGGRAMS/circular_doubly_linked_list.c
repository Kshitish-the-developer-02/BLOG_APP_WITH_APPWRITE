#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *curr;
struct node *temp;

void create_node_and_insert_data(int num);
void display_list();


void main()
{
    int n;
    int i;
    int num;

    printf("\nenter the number of node you want to create:  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nenter the data in %d node:  ", i);
        scanf("%d", &num);

        create_node_and_insert_data(num);
    }
    display_list();
}

void create_node_and_insert_data(int num)
{
    curr = (struct node *)malloc(sizeof(struct node));

    curr->data = num;
    curr->next = NULL;
    curr->pre = NULL;

    if (head == NULL)
    {
        head = temp = curr;
        head->next = head;
        head->pre = head;
    }
    else
    {
        temp->next = curr;
        curr->pre = temp;
        curr->next = head;
        head->pre = curr;
        temp = temp->next;
    }
}

void display_list()
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    
    printf("\nlist is\n");
    temp=head;
    while(temp->next!=head)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("%d\t",temp->data);

}
