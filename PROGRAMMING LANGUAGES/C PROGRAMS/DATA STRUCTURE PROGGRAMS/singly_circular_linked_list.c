#include <stdio.h>
#include <stdlib.h>

struct node
{
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

    printf("enter number of node you want to insert:  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nenter data in  %d node:  ", i);
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

    if (head == NULL)
    {
        head = temp = curr;
    }
    else
    {
        temp->next = curr;
        temp = curr;
    }

    temp->next = head;
}

void display_list()
{
    if(head==NULL)
    {
        printf("\nlist is empty");
    }

        printf("\nlist is\n");
        temp=head;
        while(temp->next!=head)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\t",temp->data);  //this line required for print the data of last node
    

}
