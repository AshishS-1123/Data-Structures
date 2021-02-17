#include <iostream>

using namespace std;

/*
Function: delete_last_node
Args: head -> head node of list from where to delete
      second_last -> node before the last node of the list
Desc: deletes the last node from the list
Returns: head -> head node of the new list
*/
node* delete_last_node(node* head, node* second_last)
{
    // deallocate the space occupied by the last node
    free( second_last->next );
    
    // make the second last node point to null
    second_last->next = NULL;
    
    return head;
}

/*
Function: delete_element
Args: head -> pointer to head node of list from which to delete
      position -> position where node is to be deleted
Desc: Deletes a node from the given position
Returns: head -> head node of the modified list
*/
node* delete_element(node* head, int position)
{
    // check that there are elements present in the list
    if(head == NULL)
    {
        cout << "List is empty, could not delete\n";
        return head;
    }

    // create temporary pointer to head node
    node* temp = head;

    // loop through the list to reach the node before the given position
    for(int i = 0; i < position-1; ++i)
    {
        // if we are not at the last node
        if(temp->next->next != NULL)
            // go to the next node
            temp = temp->next;
        // otherwise,
        else
            // exit the loop
            break;
    }
    
    // check if we are at the last node
    if(temp->next->next == NULL)
    {
        return delete_last_node(head, temp);
    }

    // if the node to be deleted is the head node
    if(position == 0)
    {
        return delete_head_node(head);
    }
    
    // if it is neighter of the above conditions
    return delete_any_node(head, temp);

}
