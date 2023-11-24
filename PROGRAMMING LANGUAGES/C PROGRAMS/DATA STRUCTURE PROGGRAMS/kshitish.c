#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *curr;
struct stack *top = NULL;
struct stack *temp;

void push(int num);
void pop();
void display();
void peak();

void main()
{
    int flag = 1;
    int choice;
    int num;

    while (flag == 1)
    {
        printf("\npress 1 for push an element in stack:  ");
        printf("\npress 2 for pop an element from the stack:  ");
        printf("\npress 3 for display the elements of stack:  ");
        printf("\npress 4 for knowing the top element:  ");
        printf("\npress 5 for exit from the program:  ");

        printf("\nenter a choice:  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nenter a number for push in stack:  ");
            scanf("%d", &num);
            push(num);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            peak();
            break;

        case 5:
            flag = 0;
            printf("\nexit from the program: thank you!.....");
            break;

        default:
            printf("\nplease chooce a valid choice");
        }
    }
}

void push(int num)
{
    curr = (struct stack *)malloc(sizeof(struct stack));
    curr->data = num;
    curr->next = NULL;

    if (top == NULL)
    {
        top = curr;
    }
    else
    {
        curr->next = top;
        top = curr;
    }
}

void pop()
{
    int num;
    if (top == NULL)
    {
        printf("\nunderflow");
    }

    temp = top;
    num = top->data;
    top = top->next;
    free(temp);
    printf("%d is  pop from the stack", num);
}

void display()
{
    temp = top;
    if (top == NULL)
    {
        printf("underflow");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}

void peak()
{
    if (top == NULL)
    {
        printf("underflow");
    }

    printf("%d iuus the top element in the stack", top->data);
}
