#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *next;
};

struct node *curr;
struct node *head = NULL;
struct node *temp;

void insert_node(int);
void display_1();
void display_2();

void main()
{
    int n, i;
    int num;

    printf("\nenter number of nodes you want to create:  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nenter data into %d node:  ", i);
        scanf("%d", &num);

        insert_node(num);
    }
    display_1();
    display_2();
}

void insert_node(int num)
{
    curr = (struct node *)malloc(sizeof(struct node *));
    curr->data = num;
    curr->next = NULL;
    curr->pre = NULL;

    if (head == NULL)
    {
        head = temp = curr;
    }
    else
    {
        head->next = curr;
        curr->pre = temp;
        temp = curr;
    }
}

void display_1()
{
    
    if (head == NULL)
    {
        printf("\nlist is empty");
    }

    printf("\nprint list from left to right\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void display_2()
{

    if (head == NULL)
    {
        printf("\nlist is empty");
    }

    printf("\nprint list from right to left\n");
    temp = curr;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->pre;
    }
}
