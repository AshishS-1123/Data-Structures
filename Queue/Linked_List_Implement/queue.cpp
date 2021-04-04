#include <iostream>

#include "../../Linked_List/Singly_Linked_List/linked_list.cpp"

using namespace std;

// define a structure for queue
typedef struct Queue
{
    // pointer to the front node of queue
    node* front;

    // pointer to the rear node of queue
    node* rear;
} Queue;

/*
Function: create_queue
Desc: creates a new queue object
Args: None
Returns: q -> queue object created
*/
Queue create_queue()
{
    // create a queue object
    Queue q;

    // initialize the front and rear pointers
    q.front = NULL;
    q.rear = NULL;

    // return the created queue
    return q;
}

