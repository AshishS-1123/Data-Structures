#include <iostream>

using namespace std;

/*
Function: search_iterative
Desc: iteratively search element in list
Args: head -> head pointer to list
      element -> element to search
Returns: bool -> true if found, false otherwise
*/
bool search_iterative(node* head, int element)
{
    // temporary node for traversal
    node* temp = head;

    // repeat for all elements in list
    while(temp != NULL)
    {
        // check if this node contains element to search
        if(temp->data == element)
            // return element found
            return true;

        // otherwise, move to next node
        temp = temp->next;
    }

    // if element not found,
    return false;
}

