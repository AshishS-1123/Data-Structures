#include <iostream>

using namespace std;

// structure to denote node in list
typedef struct node
{
    // member to hold data of node
    int data;
    // pointer to next node
    struct node* next;
}node;

// a node to point to some element in the list
node* start;


