#include <iostream>

using namespace std;

/*
Function: dequeue
Desc: Remove element from the front of the queue
Args: q -> Queue object from where element is to be removed
Returns: q -> modified queue
*/
Queue dequeue(Queue q)
{
    // check if there is underflow in queue
    if(isUnderflow(q))
    {
        cout << "\tQueue Empty... Underflow\n";
        return q;
    }

    // check if front and rear point to the same element
    if(q.front == q.rear)
    {
        // reset front and rear to the empty condition
        q.front = -1;
        q.rear = -1;

        return q;
    }

    // increment the front pointer with modulus
    q.front = (q.front + 1) % CAPACITY;

    // return the modified queue
    return q;
}
