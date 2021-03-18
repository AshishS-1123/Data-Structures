#include <iostream>

using namespace std;

/*
Function: insert_element
Desc: insert element into a doubly circular linked list
Args: start -> start node of list where element is to be inserted
      element -> element to be inserted to the list
      position -> position at which element is to be inserted
Returns: start -> start node to the new list
*/
node* insert_element(node* start, int element, int position)
{
    // create new node for element to be inserted
    node* new_node = (node*) malloc(sizeof(node*));
    
    // put data into the list
    new_node->data = element;
    // set values to previous and next pointers
    new_node->next = new_node;
    new_node->prev = new_node;

    // check if the list is empty
    if(start == NULL)
        return new_node;
  
    // if position of new node is positive
    if(position > 0)
        // insert in forward direction
        return insert_forward(start, new_node, position);
    // if position is 0
    else if(position == 0)
        // insert at head
        return insert_head(start, new_node);
    // otherwise
    else
        // insert in backward direction
        return insert_backward(start, new_node, position);
}
