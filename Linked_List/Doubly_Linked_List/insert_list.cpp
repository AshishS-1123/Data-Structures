#include <iostream>

using namespace std;

/*
Function: insert_at_head
Desc: inserts given node at the head of linked list
Args: head -> head node of list where node is to be inserted
      new_node -> node to be inserted in list
Returns: head -> head node of new list
*/
node* insert_at_head(node* head, node* new_node)
{
    // make next pointer of new_node point to the head node
    new_node->next = head;
    // make prev pointer of new node point to null
    new_node->prev = NULL;

    // make the new_node as the new head node
    head = new_node;

    return head;
}

/*
Function: insert_at_end
Desc: inserts given node at the end of linked list
Args: last -> last node of list where node is to be inserted
      new_node -> node to be inserted in list
Returns: None
*/
void insert_at_end(node* last, node* new_node)
{
    // make next pointer of last node point to new node
    last->next = new_node;
    // make prev pointer of new node point to last node
    new_node->prev = last;

    // make next of new node as null
    new_node->next = NULL;
}

/*
Function: insert_anywhere
Desc: inserts given node in the middle of the list
Args: node_before -> node after which new node is to be inserted
      new_node -> node to be inserted in list
Returns: None
*/
void insert_anywhere(node* node_before, node* new_node)
{
    // make next pointer of new node point to node after
    new_node->next = node_before->next;
    // make prev pointer of node after point to new node
    node_before->next->prev = new_node;
    // make next pointer of node before point to new node
    node_before->next = new_node;
    // make prev pointer of new node point to node before
    new_node->prev = node_before;

    // make the current node before point to the new node
    node_before->next = new_node;
}

/*
Function: insert_element
Desc: Inserts the given element at the given position in the list
Args: head -> pointer to head of list where element is to be inserted
      element -> value to be inserted
      position -> index at which the element is to be inserted
Returns: head node of new list
*/
node* insert_element(node* head, int element, int position)
{
    // create a temporary node for traversal
    node* temp = head;

    // create a new node to insert 
    node* new_node = (node*) malloc(sizeof(node*));
    new_node->data = element;

    // check if the list is already empty
    if(head == NULL)
    {
        return new_node;
    }

    // if the new node is to be inserted at head
    if(position == 0)
    {
        return insert_at_head(temp, new_node);
    }

    // if user specifically asks to insert at the end of the list
    if(position < 0)
    {
        // move upto the last element
        while(temp->next != NULL)
            temp = temp->next;
        // insert the new node at the end of the list
        insert_at_end(temp, new_node);
        return head;
    }

    // in all other cases, traverse the list to the given postion
    for(int i = 0; i < position-1; ++i)
    {
        // first check that there is some node after current node
        if(temp->next != NULL)
            temp = temp->next;
    }

    // check if we are at the last node
    if(temp->next == NULL)
    {
        // insert the element at the end
        insert_at_end(temp, new_node);
        return head;
    }

    // in all other cases,
    insert_anywhere(temp, new_node);
    return head;
}
