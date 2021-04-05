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

/*
Function: print_queue
Desc: prints the elements of the queue
Args: q -> queue object to be printed
Returns: None
*/
void print_queue(Queue q)
{
    // create a temporary node for traversal
    node* temp = q.front;

    // check if the queue is empty
    if(q.front == NULL && q.rear == NULL)
    {
        cout << "\tQueue is Empty... Underflow\n";
        return;
    }

    // print the linked holding elements of queue
    print_list(q.front);

}

