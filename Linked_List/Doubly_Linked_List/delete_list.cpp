#include <iostream>

using namespace std;

/*
Function: delete_element
Desc: Deletes element at given position from the list
Args: head -> head pointer to the list to be deleted
      position -> index of element to be deleted
Returns: head -> head pointer to new list
*/
node* delete_element(node* head, int position)
{

    // create a temporary node for traversal
    node* temp = head;

    // check that the list is not empty
    if(temp == NULL)
        return NULL;

    // check if user wants to delete at head
    if(position == 0)
    {
        return delete_at_head(head);
    }

    // if user wants to delete last element
    if(position == -1)
    {
        // traverse the list to go to last element
        while(temp->next != NULL)
            temp = temp->next;
    
        // delete the last element
        delete_at_end(temp);

        return head;
    }
    
    // in all other cases
    // traverse the list to go to given element
    for(int i = 0; i < position; ++i)
    {
        // check that next node exists
        if(temp->next != NULL)
            // goto the next node
            temp = temp->next;
    }

    // now check if we have reached at the final node
    if(temp->next == NULL)
    {
        // delete the element at end
        delete_at_end(temp);
        return head;
    }

    // for all other cases, delete element from middle
    delete_anywhere(temp);
    return head;
}
