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
    //for(int i = q.front; i != (q.rear+1)%CAPACITY; )
    int i = q.front;
    do
    {
        // print the element
        cout << q.data[i] << " ";

        // increment i
        i = (i + 1) % CAPACITY;

    }while(i != (q.rear+1)%CAPACITY);

    cout << "(rear)\n\n";
}

