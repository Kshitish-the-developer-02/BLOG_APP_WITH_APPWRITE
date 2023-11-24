#include <stdio.h>
#include <stdlib.h>

// Structure to create a node with data and the next pointer
struct node
{
    int data;
    struct node *ptr;
} *top, *top1, *temp;

int count = 0;
// Push() operation on a  stack
void push(int value)
{
    if (top == NULL)
    {
        top = (struct node *)malloc( sizeof(struct node));
        top->ptr = NULL;
        top->data = value;
    }
    else
    {
        temp = (struct node *)malloc( sizeof(struct node));
        temp->ptr = top;
        temp->data = value;
        top = temp;
    }
    count++;
    printf("Node is Inserted\n\n");
}

int pop()  
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("\nStack Underflow\n");
        return -1;
    }
    else
        top1 = top1->ptr;
    int popped = top->data;
    free(top);
    top = top1;
    count--;
    return popped;
}


void display()
{
    // Display the elements of the stack
    top1 = top;

    if (top1 == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }

    printf("The stack is \n");
    while (top1 != NULL)
    {
        printf("%d--->", top1->data);
        top1 = top1->ptr;
    }
    printf("NULL\n\n");
}

int main()
{
    int choice, value;
    int flag=1;
    printf("\nImplementation of Stack using Linked List\n");
    while (flag==1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("Popped element is :%d\n", pop());
            break;                     
        case 3:
            display();
            break;
        case 4:
           flag=0;
           printf("exit from program!......");
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}