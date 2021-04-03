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

/*
Function: print_queue
Desc: prints all elements of queue from front to rear
Args: q -> Queue object to be printed
Returns: None
*/
void print_queue(Queue q)
{
    // check if queue is empty
    if(q.front == -1 && q.rear == -1)
    {
        cout << "\tQueue is Empty... Underflow\n\n";
        return;
    }
    
    cout << "\t(front) ";

    // repeat for all elements in the queue
    for(int i = q.front; i <= q.rear; ++i)
        cout << q.data[i] << " ";

    cout << "(rear)\n\n";
}

/*
Function: isOverflow
Desc: check if overflow has occured in queue
Args: q -> queue to be checked for overflow
Returns: bool -> true if overflow, false otherwise
*/
bool isOverflow(Queue q)
{
    // check if there are any empty places in array
    if(q.rear == CAPACITY)
        return true;
    return false;
}

