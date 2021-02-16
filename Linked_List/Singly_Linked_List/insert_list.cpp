#include <iostream>

using namespace std;

/*
Function: insert_at_head
Args: head -> head pointer to list where element is to be inserted
      new_node -> node to be inserted at head
Desc: Inserts the given node before head of list
Returns: head -> head pointer to new list
*/
node* insert_at_head(node* head, node* new_node)
{
    // make the new node point to head node
    new_node->next = head;
    // reassign head to the new node
    head = new_node;

    return head;
}

/*
Function: insert_anywhere
Args: head -> head pointer to list where element is to be inserted
      new_node -> node to be inserted
Desc: Inserts the given node at the given position
Returns: head -> head pointer to new list
*/
node* insert_anywhere(node* head, node* new_node, int position)
{
    // create a temporary node to point to the head
    node* temp = head;

    // skip to the given position
    for(int i = 0; i < position; ++i)
    {
        // check if there are any elements after this node
        if(temp->next != NULL)
            // move to the next list
            temp = temp->next;
    }
    
    // point the next node of new node to that of current node
    new_node->next = temp->next;
    // insert the new node
    temp->next = new_node;
    
    return head;
}

/*
Function: insert_at_end
Args: head -> head pointer to list where element is to be inserted
      new_node -> node to be inserted at end
Desc: Inserts the given node at the end of the list
Returns: head -> head pointer to new list
*/
node* insert_at_end(node* head, node* new_node)
{
    // create a temporary node to point to head
    node* temp = head;
    
    // repeat until we are at the end of the list
    while(temp->next != NULL)
    {
        // make temp point to the next node
        temp = temp->next;
    }

    // attach the new node to the last element
    temp->next = new_node;
    // new node points to nothing
    new_node->next = NULL;

    return head;
}

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
    // add the element to the node
    new_node->data = element;

    // check we are inserting to an empty list
    if(head == NULL)
        // in this case, we can return the new node directly as head node
        return new_node;

    // if we need to insert before head node
    if(index == 0)
    {
        // insert the new node before the head node
        return insert_at_head(head, new_node);
    }
    else if(index < 0)
    {
        // in case index provided is -1,
        // we insert the new node at the end of the list
        return insert_at_end(head, new_node);
    }
    
    // otherwise, insert the new node into the list
    return insert_anywhere(head, new_node, index);
}

