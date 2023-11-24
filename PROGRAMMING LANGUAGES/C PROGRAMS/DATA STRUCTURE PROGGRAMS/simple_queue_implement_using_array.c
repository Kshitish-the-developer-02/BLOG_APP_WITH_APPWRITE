/*progrm for implement queue operations by using array*/

#include <stdio.h>
#define N 10

int queue[N];
int front = -1;
int rear = -1;

void insert_data_into_queue(int num);
void delete_data_from_queue();
void peek();
void display();

void main()
{
    int flag = 1;
    int choice;
    int num;

    while (flag == 1)
    {
        printf("\nPress 1. INSERT data into the queue ");
        printf("\nPress 2. DELETE data from the queue ");
        printf("\nPress 3. PEEK (check the front data of queue) ");
        printf("\nPress 4. DISPLAY the data of the queue ");
        printf("\nPress 5. EXIT from the program ");

        printf("\nEnter your choice:  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nenter a number to insert into the queue:  ");
            scanf("%d", &num);
            insert_data_into_queue(num);
            printf("\n%d  is inserted successfully into the queue",num);
            break;

        case 2:
            delete_data_from_queue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("\nexit from the program!.......thank you");
            flag = 0;
            break;

        default:
            printf("\ninvalid choice... please choose a valid choice");
        }
    }
}

void insert_data_into_queue(int num)
{
    if (rear == N - 1)
    {
        printf(" queue is overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }
    else
    {
        rear++;
        queue[rear] = num;
    }
}

void delete_data_from_queue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d is deleted from the queue", queue[front]);
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("front element  is = %d ", queue[front]);
    }
}

void display()
{
    int i;

    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}
