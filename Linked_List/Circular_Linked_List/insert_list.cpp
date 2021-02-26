#include <iostream>

using namespace std;

/*
Function: traverse_list
Desc: traverses the list upto the given position
Args: start -> node from where to count
      position -> position of node th traverse to
Returns: node_at_position -> pointer to the node at given position
*/
node* traverse_list(node* start, int position)
{
    // node pointer to node found at given position
    node* node_at_position = start;

    // go to the given position
    for(int i = 0; i < position-1; ++i)
        node_at_position = node_at_position->next;

    // return the node found
    return node_at_position;
}

/*
Function: insert_element
Desc: inserts given element in the list
Args: start -> node to list where element is to be inserted
Returns: start -> node to new list
*/
node* insert_element(node* start, int element, int position)
{
    // create a new node to add
    node* new_node = (node*) malloc(sizeof(node*));
    // add the data to the node
    new_node->data = element;

    // check if there are any elements present in the list
    if(start == NULL)
    {
        // point next of new node to itself
        new_node->next = new_node;

        return new_node;
    }

    // traverse the list until we reach the given position
    node* temp = traverse_list(start, position);

    // insert the node after the given node
    new_node->next = temp->next;
    temp->next = new_node;

    // return new start
    return start;
}
