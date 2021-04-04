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

