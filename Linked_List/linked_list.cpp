#define LINKED_LIST_DEFINE

#include <iostream>

using namespace std;

// definition of node
typedef struct node
{
    // variable to hold data
    int data;
    // pointer to next node
    struct node* next;
}node;

// node pointer to point to head node
node* HEAD;

/*
Function: print_list
Args: head -> head pointer of list to be printed
Desc: Print the linked list from the given element
Returns: None
*/
void print_list(node* head)
{
    // create temporary node pointer that points to the head node
    node* temp = head;

    // repeat for all elements
    while(temp != NULL)
    {
        // print the current element
        cout << "\t" << temp->data;
        // go to the next node
        temp = temp->next;
    }
    cout << "\n\n";
}

/*
Function: cleanup
Args: head -> pointer to head of list to cleanup
Desc: Deallocates space of all nodes in linked list
Returns: None
*/
void cleanup(node* head);
{
    // temporary pointer to next node in list
    node* temp = head;
    
    cout << "Deleting All Elements in List\n";

    // repeat until we are at the end of the list
    while(temp != NULL)
    {
        cout << "\tDelete " << temp->data << "\n";
        // point head to the next node in sequence
        head = head->next;
        // deallocate to space where temp points
        free(temp);
        // reassign temp to point to head
        temp = head;
    }

    cout << "All Done !!!\n\n";
}
