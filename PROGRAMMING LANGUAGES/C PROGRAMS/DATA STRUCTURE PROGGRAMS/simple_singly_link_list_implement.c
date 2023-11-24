#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *curr;
struct node *head = NULL;
struct node *temp;

void insert_node(int num);
void display_list();

void main()
{
    int n, i;
    int num;
    printf("enter the number of node you want to create:  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nenter the data into %d node: ",i);
        scanf("%d", &num);

        insert_node(num);
    }
    display_list();
}

void insert_node(int num)
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
}

void display_list()
{
    temp = head;
    printf("\nlist is: \n");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
