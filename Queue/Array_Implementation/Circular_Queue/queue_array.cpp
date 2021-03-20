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

