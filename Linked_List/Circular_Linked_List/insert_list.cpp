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


