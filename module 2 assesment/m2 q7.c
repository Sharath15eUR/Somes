#include <stdio.h>

#define MAX_SIZE 100

struct Queue {
    int data[MAX_SIZE];
    int front, rear;
};

void initializeQueue(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(struct Queue* queue) {
    return (queue->front == -1);
}

int isFull(struct Queue* queue) {
    return (queue->rear == MAX_SIZE - 1);
}

void enqueue(struct Queue* queue, int data) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear++;
    queue->data[queue->rear] = data;
}

int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1; 
    }

    int data = queue->data[queue->front];

    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front++;
    }

    return data;
}


int countElements(struct Queue* queue) {
    if (isEmpty(queue)) {
        return 0;
    }

    return (queue->rear - queue->front + 1);
}

void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->data[i]);
    }
    printf("\n");
}

void main() {
    struct Queue myQueue;
    printf("Initialize a Queue!");
    initializeQueue(&myQueue);
    printf("\n check if the queue is empty or not?: ");
    if(isFull)
        printf("yes");
    else
        printf("no");
    printf("\nInsert some elements into queue: ");
    enqueue(&myQueue, 1);
    enqueue(&myQueue, 2);
    enqueue(&myQueue, 3);
    printf("\n The queue elements are: ");
    display(&myQueue);
    printf("\nNumber of elements in the queue: %d", countElements(&myQueue));
    printf("\ndelete two elements from the said queue: ");
    dequeue(&myQueue);
    dequeue(&myQueue);
    printf("\nQueue elements are: ");
    display(&myQueue);
    printf("\nThe number of elements in the queue: %d",countElements(&myQueue));
    printf("\ninsert another element into the queue: ");
    enqueue(&myQueue,4);
    printf("\nthe queue elements are: ");
    display(&myQueue);
    printf("\nThe number of elements in the queue: %d",countElements(&myQueue));
    
}
