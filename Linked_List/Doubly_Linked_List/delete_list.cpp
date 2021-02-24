#include <iostream>

using namespace std;

/*
Function: delete_at_head
Desc: delete the element at the head of list
Args: head -> head node of list to delete
Returns: head -> head pointer of new list
*/
node* delete_at_head(node* head)
{
    // create temporary node for traversal
    node* temp = head;

    // make prev of next node point to null
    temp->next->prev = NULL;

    // make next node as head node
    head = temp->next;

    // deallocate the head node
    free(temp);

    return head;
}

/*
Function: delete_at_end
Desc: delete element at end of list
Args: last -> pointer to last node of list
Returns: None
*/
void delete_at_end(node* last)
{
    // create pointer to second last node
    node* second_last = last->prev;

    // point the next of second last node to null
    second_last->next = NULL;

    // deallocate last node
    free(last);
}

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
