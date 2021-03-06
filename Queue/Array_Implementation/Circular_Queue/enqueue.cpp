#include <iostream>

using namespace std;

/*
Function: enqueue
Desc: Inserts element from the rear of a queue
Args: q -> Queue object where element is to be inserted
      element -> item to be inserted
Returns: q -> modified queue
*/
Queue enqueue(Queue q, int element)
{
    // check if there is overflow in queue
    if(isOverflow(q))
    {
        cout << "\nQueue Full... Overflow\n";
        return q;
    }

    // check if queue is currently empty
    if(q.front == -1 && q.rear == -1)
        // increment front and rear
        ++q.front, ++q.rear;
    // otherwise
    else
        // increment rear with modulus
        q.rear = (q.rear + 1) % CAPACITY;

    // insert element at rear
    q.data[q.rear] = element;

    // return the modified queue
    return q;
}
