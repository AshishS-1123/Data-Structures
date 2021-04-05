#include <iostream>

using namespace std;

/*
Function: enqueue
Desc: insert element into the queue
Args: q -> queue where elements are to be inserted
      element -> element to be inserted
Returns: q -> modified queue
*/
Queue enqueue(Queue q, int element)
{
    // create a new node to insert
    node* new_node = (node*) malloc(sizeof(node*));

    // add data to the new node
    new_node->data = element;

    // check if queue is empty
    if(q.front == NULL && q.rear == NULL)
    {
        // point the front and rear to the new node
        q.front = new_node;
        q.rear = new_node;

        // return this queue
        return q;
    }

    // add this node after the rear node
    q.rear->next = new_node;

    // make the last node as the rear node
    q.rear = q.rear->next;

    // return the modified queue
    return q;
}
