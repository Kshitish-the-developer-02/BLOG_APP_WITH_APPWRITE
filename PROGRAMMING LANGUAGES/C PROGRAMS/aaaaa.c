#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

typedef struct {
    int data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Queue;

Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

int isEmpty(Queue* q) {
    return q->front == -1;
}

int isFull(Queue* q) {
    return (q->rear+1)%MAX_QUEUE_SIZE == q->front;
}

void enqueue(Queue* q, int item) {
    if (isFull(q)) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
    } else {
        q->rear = (q->rear+1)%MAX_QUEUE_SIZE;
    }
    q->data[q->rear] = item;
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    int item = q->data[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front+1)%MAX_QUEUE_SIZE;
    }
    return item;
}

void display(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    int i;
    for (i = q->front; i != q->rear; i = (i+1)%MAX_QUEUE_SIZE) {
        printf("%d ", q->data[i]);
    }
    printf("%d\n",q->data);
}
