/*
CH-230-A
a8_p3.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

*/
/**
 * @file testqueue.c
 *//*


#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    if (queue_is_full(pq)) {
        return 1;
    }
    // if queue is full 1 is returned
    Node * queuer = (Node *) malloc(sizeof (Node));
    //allocates memory for node
    queuer -> item = item;
    queuer -> next = NULL;
    //copies item and point is set to NULL
    if (queue_is_empty(pq)) {
        pq -> front = queuer;
    } else {
        pq -> rear -> next = queuer;
    }
    //front node is empty, rear node's next is not
    pq -> rear = queuer;
    pq -> items++;
    //new node and items are iterated
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    if (queue_is_empty(pq)) {
        return -1;
        //if empty, -1 is returned
    }
    *pitem = pq -> front -> item;
    Node * dequeuer = pq -> front;
    pq -> front = pq -> front -> next;
    //copies to waiting variables and resets pointer
    free(dequeuer);
    //frees the memory
    if (queue_is_empty(pq)) {
        pq -> rear = NULL;
        pq -> front = NULL;
    }
    pq -> items--;
    //reset pointers and decrement item count
    return 0;
}

void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}

void printq(const Queue *pq) {
        Node * printer = pq -> front;
        //sets the pointer at the beginning
        while (printer != NULL) {
        printf("%d ", printer -> item);
        printer = printer -> next;
        //while the pointer doesn't point to NULL, each item is printed and iterated
    }
}*/
