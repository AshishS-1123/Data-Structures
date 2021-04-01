#include <iostream>

#include "queue_array.cpp"
#include "enqueue.cpp"
#include "dequeue.cpp"

using namespace std;

int main()
{
    // create a Queue object
    Queue q = create_queue();

    // check underflow
    if(isUnderflow(q))
        cout << "\nEmpty Queue has Underflow...\n\n";

    // insert 10
    q = enqueue(q, 10);

    // print queue
    cout << "After inserting 10\n";
    print_queue(q);

    // insert 20
    q = enqueue(q, 20);

    // print queue
    cout << "After inserting 20\n";
    print_queue(q);

    // insert 30, 40, 50
    q = enqueue(q, 30);
    q = enqueue(q, 40);
    q = enqueue(q, 50);

    // print queue
    cout << "After inserting 30, 40 and 50\n";
    print_queue(q);

    // check if there is overflow in queue
    if(isOverflow(q))
        cout << "\nFull Queue has Overflow\n";

    // dequeue
    q = dequeue(q);

    // print queue
    cout << "Remove element from front\n";
    print_queue(q);
    
    // insert another element in circular way
    q = enqueue(q, 60);

    // print queue
    cout << "Inserting 60, in circular way\n";
    print_queue(q);

    // dequeue
    q = dequeue(q);

    // print queue
    cout << "Remove another element from front\n";
    print_queue(q);

    // dequeue, dequeue, dequeue, aaaand dequeue
    q = dequeue(q);
    q = dequeue(q);
    q = dequeue(q);
    q = dequeue(q);

    // print queue
    cout << "Remove 4 elements from front\n";
    print_queue(q);

    // try dequeue from empty queue
    cout << "Trying to remove from empty Queue...\n";
    q = dequeue(q);

    return 0;
}

