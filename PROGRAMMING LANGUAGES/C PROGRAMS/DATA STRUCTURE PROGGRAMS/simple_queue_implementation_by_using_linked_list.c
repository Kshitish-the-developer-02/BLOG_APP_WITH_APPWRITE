/*program for implement all the operaions
of a simple queue by using linked list with manu design
program*/

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};

struct queue *front = NULL;
struct queue *rear = NULL;
struct queue *curr;
struct queue *temp;

void insert_data_in_queue(int num);
void delete_data_from_queue();
void display_queue();

void main()
{
    int flag = 1;
    int choice;
    int num;

    while (flag == 1)
    {
        printf("\nPress 1: INSERT data into queue");
        printf("\nPress 2: DELETE data from queue");
        printf("\nPress 3: DISPLAY the data which are in the queue");
        printf("\nPress 4: EXIT from the program");

        printf("\nenter a choice:  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nenter a number to insert in queue:  ");
            scanf("%d", &num);
            insert_data_in_queue(num);
            printf("\n%d is inserted into the queue", num);
            break;

        case 2:
            delete_data_from_queue();
            break;

           
        case 3:
            display_queue();
            break;

        case 4:
            printf("\nexit from the program!.....thank you");
            flag = 0;
            break;

        default:
            printf("invalid choice ....plase choose valid choice");
        }
    }
}

void insert_data_in_queue(int num)
{
    curr = (struct queue *)malloc(sizeof(struct queue));
    curr->data = num;
    curr->next = NULL;

    if (front == 0 && rear == 0)
    {
        front = rear = curr;
    }
    else
    {
        rear->next = curr;
        rear = curr;
    }
}

void delete_data_from_queue()
{
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d is deleted from queue", front->data);
        front = front->next;
        free(temp);
    }
}


void display_queue()
{
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}
