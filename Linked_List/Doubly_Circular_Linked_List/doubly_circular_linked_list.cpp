#include <iostream>

using namespace std;

// structure to denote node in list
typedef struct node
{
    // member to hold data of node
    int data;
    // pointer to next node
    struct node* next;
    // pointer to previous node
    struct node* prev;
}node;

// a node to point to some element in the list
node* start;

/*
Function: cleanup
Desc: deallocates memory of all nodes in list
Args: start -> pointer to any node in list
Returns: None
*/
void cleanup(node* start)
{
    // pointer for traversal
    node* end = start;

    // loop through all the nodes
    do
    {
        cout << "\tDelete " << end->data << "\n";
        // temporarily hold location of end node
        node* temp = end;
        
        // increment the end node
        end = end->next;
        
        // deallocate the current node
        free(temp);

    }while(end != start);

}
