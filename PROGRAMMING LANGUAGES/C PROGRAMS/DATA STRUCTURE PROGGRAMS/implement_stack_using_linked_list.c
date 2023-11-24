/*program for implement all the stack operation by using linked
list with using manu design program*/

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *curr, *top = NULL;
struct stack *temp;

void push(int num);
void pop();
void peek();
void display();

void main()
{
    int flag = 1;
    int choice;
    int num;

    while (flag == 1)
    {
        printf("\nPress 1: PUSH data into stack");
        printf("\nPress 2: POP data from the stack");
        printf("\nPress 3: PEEK (check the top value of stack)");
        printf("\nPress4: DISPLAY the values of stack");
        printf("\nPress 5: EXIT from the program");

        printf("\nenter a choice:  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nenter a number to insert in the stack:  ");
            scanf("%d", &num);
            push(num);
            printf("%d is inserted into the stack", num);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            flag = 0;
            printf("\nexit from the program !...... thank you.");
            break;

        default:
            printf("\nYou choose an invalid choice.....please choose a valid choice");
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
        printf("underflow");
    }

    temp = top;
    num = top->data;
    top = top->next;
    free(temp);
    printf("%d is deleted from the stack", num);
}

void peek()
{
    if (top == NULL)
    {
        printf("underflow");
    }
    else
    {
        printf("top element is %d", top->data);
    }
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
        while (temp != 0)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}