#include <iostream>

using namespace std;

/*
Function: delete_element
Desc: deletes element at the given position
Args: start -> node from where to count position
      position -> position of element to be deleted
Returns: start -> start node of new node
*/
node* delete_element(node* start, int position)
{
    // temporary node for traversal
    node* temp = start;

    // if user want to delete from empty list
    if(start == NULL)
        // return without deleting
        return start;

    // loop through the list to the given position
    for(int i = 0; i < position-1; ++i)
        temp = temp->next;

    // delete the given node
    delete_node_after(temp);

    return start;
}
