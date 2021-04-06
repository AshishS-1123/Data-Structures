#include <iostream>

using namespace std;

/*
Function: find_length_iterative
Desc: iteratively finds length of linked list
Args: head -> pointer to head node
Returns: length -> length of linked list
*/
int find_length_iterative(node* head)
{
    // variable to store length of list
    int length = 0;

    // temporary node pointer for traversal
    node* temp = head;

    // repeat for all nodes
    while(temp != NULL)
    {
        // increment length of list
        ++length;

        // move to next element
        temp = temp->next;
    }

    return length;
}

/*
Function: find_length_recursive
Desc: recursively finds length of linked list
Args: head -> head pointer of list
Returns: length -> length of list
*/
int find_length_recursive(node* head)
{
    if(head != nullptr)
        return 1 + find_length_recursive(head->next);
    else
        return 0;
}
