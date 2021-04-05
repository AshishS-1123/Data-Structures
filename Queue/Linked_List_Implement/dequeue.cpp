#include <iostream>

using namespace std;

/*
Function: dequeue
Desc: remove element from front of queue
Args: q -> queue from where elements are to be removed
Returns: q -> modified queue
*/
Queue dequeue(Queue q)
{
    // check if there is underflow
    if(isUnderflow(q))
    {
        cout << "\nCannot remove element... Underflow\n";
        return q;
    }

    // check if front and rear point to same element
    if(q.front == q.rear)
    {
        // deallocate the element
        free(q.front);

        // point front and rear to null
        q.front = NULL;
        q.rear = NULL;

        // return this new queue
        return q;
    }

    // temporary node to hold the front node
    node* temp = q.front;

    // move the front node to node after that
    q.front = q.front->next;

    // unallocate the space of temp node
    free(temp);

    // return the new queue
    return q;
}
