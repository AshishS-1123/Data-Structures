#include <iostream>

using namespace std;

/*
Function: insert_element
Args: head -> head pointer of list where element is to be inserted
      element -> item to be inserted
      index -> position where element is to be inserted
Desc: Insert the given item into the list at specified position
Returns: head -> head pointer to new list
*/
node* insert_element(node* head, int element, int index)
{
    // create a new node to insert to linked list
    node* new_node;
    // alloc memory to the list
    new_node = (node*) malloc( sizeof(node*) );

    // check we are inserting to an empty list
    if(HEAD == NULL)
        // in this case, we can return the new node directly as head node
        return new_node;
    
    return new_node;

}
