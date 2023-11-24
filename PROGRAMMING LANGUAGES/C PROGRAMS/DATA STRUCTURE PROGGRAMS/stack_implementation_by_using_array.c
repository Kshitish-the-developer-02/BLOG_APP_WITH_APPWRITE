#include <stdio.h>
#define MAX 30
int top = -1;

void push(int stack[], int num);
void pop(int stack[]);
void display(int stack[]);

void main()
{
    int stack[MAX];
    int flag = 1, choice;
    int num;
    while (flag == 1)
    {
        printf("\npress 1 for insert a number in the stack\n");
        printf("press 2 for delete a number from the stack\n");
        printf("press 3 for display the stack\n");
        printf("press 4 for exit from the program\n");
        printf("enter a choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter a number to insert in the stack:\n");
            scanf("%d", &num);
            push(stack, num);
            break;

        case 2:
            pop(stack);
            break;

        case 3:
            display(stack);
            break;

        case 4:
            flag = 0;
            printf("exit from the program\n");
            break;

        default:
            printf("invalid choice...");
        }
    }
}

void push(int stack[], int num)
{
    if (top == MAX - 1)
    {
        printf("\nstack is full");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void pop(int stack[])
{
    if (top == -1)
    {
        printf("\nstack is empty");
    }
    else
    {
        printf("\ndelete number from stack is:%d", stack[top]);
        top--;
    }
}

void display(int stack[])
{
    int i;
    printf("\ndisplay all number which are present in stack\n");
    for (i = top; i >= 0; i--)
    {
        printf("%d\t", stack[i]);
    }
}
