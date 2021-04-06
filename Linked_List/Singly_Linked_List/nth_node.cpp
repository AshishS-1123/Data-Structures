#include <iostream>

using namespace std;

/*
Function: get_element_at_index
Desc: returns element at given index in list
Args: head -> head pointer to list
      index -> index at which element is to be returned
Returns: element -> element located at that index, -1 if not present
*/
int get_element_at_index(node* head, int index)
{
    // create temporary pointer for traversal
    node* temp = head;

    // variable to count what index we are currently on
    int count = 0;

    while(temp != nullptr)
    {
        // check if we are at desired location
        if(count == index)
            // return the element
            return temp->data;

        // increment count
        ++count;
        // move to next node
        temp = temp->next;
    }

    // if element not found
    return -1;
}

