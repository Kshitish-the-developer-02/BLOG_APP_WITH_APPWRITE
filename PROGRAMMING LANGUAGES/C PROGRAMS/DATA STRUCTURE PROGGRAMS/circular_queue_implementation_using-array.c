#include <stdio.h>
#define N 20
int queue[N];
int front = -1;
int rear = -1;

void insert_into_circular_queue(int num);
void delete_from_circular_queue();
void display_data_of_circular_queue();


int main()
{
    int flag = 1;
    int choice;
    int num;

    while (flag == 1)
    {
        printf("\nPress 1.  for INSERT  data into the circular queue: ");
        printf("\nPress 2.  for DELETE  data from the circular queue: ");
        printf("\nPress 3.  for DISPLAY  the data of circular queue: ");
        printf("\nPress 4.  for EXIT  from the program: ");

        printf("\nenter a choice:  ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("\nenter a number to insert into the circular queue:  ");
            scanf("%d", &num);
            insert_into_circular_queue(num);
            printf("%d is inserted into the circular queue\n",num);
            break;

        case 2:
            delete_from_circular_queue();
            break;

        case 3:
            display_data_of_circular_queue();
            break;

        case 4:
            flag = 0;
            printf("\nexit from the program!..... thank you see you again");
            break;

        default:
            printf("\ninvalid choice...... choose a valid choice");
        }
    }
}

void insert_into_circular_queue(int num)
{
    if (rear == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }
    else if (((rear + 1) % N) == front)
    {
        printf("queue is full");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = num;
    }
}

void delete_from_circular_queue()
{
    if (rear == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("\ndeleted element is=%d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void display_data_of_circular_queue()
{
    int i=front;
    if (rear == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else{
        printf("\ncircular queue is:   ");
        while(i!=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    }

}
