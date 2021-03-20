#include <iostream>

// macro to define the capacity of queue
#define CAPACITY 5

using namespace std;

// structure to define a queue
typedef struct Queue
{
    // array to hold the data of queue
    int data[CAPACITY];

    // pointer to first element
    int front;

    // pointer to rear element
    int rear;
} Queue;

/*
Funcion: create_queue
Desc: creates and initialize queue object and return it
Args: None
Returns: None
*/
Queue create_queue()
{
    // create a queue object
    Queue q; 

    // initialize the front pointer
    q.front = -1;
    // initialize the rear element
    q.rear = -1;

    // return the queue object
    return q;
}

