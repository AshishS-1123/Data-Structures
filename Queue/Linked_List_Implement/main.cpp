#include <iostream>

#include "queue.cpp"
#include "enqueue.cpp"
#include "dequeue.cpp"

using namespace std;

int main()
{
    // create a new queue
    Queue q = create_queue();

    // print empty queue
    cout << "After printing empty queue\n";
    print_queue(q);

    // insert element
    q = enqueue(q, 10);

    // print queue
    cout << "After inserting 10\n";
    print_queue(q);

    // insert element
    q = enqueue(q, 20);

    // print queue
    cout << "After inserting 20\n";
    print_queue(q);

    // remove element from queue
    q = dequeue(q);

    // print queue
    cout << "After removing element\n";
    print_queue(q);

    // remove element from queue
    q = dequeue(q);

    // print queue
    cout << "After removing element\n";
    print_queue(q);

    // try to remove from empty queue
    q = dequeue(q);

    return 0;
}
