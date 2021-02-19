#include <iostream>

using namespace std;

// define node for doubly linked list
typedef struct node
{
    // variable to hold data
    int data;
    // pointer to next node
    struct node* next;
    // pointer to previous node
    struct node* prev;
}node;

// node to represent head node of linked list
node* head;

/*
Function: print_list
Desc: prints the list, given its head node
Args: head -> head node of list to print
Returns: None
*/
void print_list(node* head)
{
    // create a temporary node for traversal
    node* temp = head;
   
    cout << "\n\tNULL <---> ";
    // repeat until  we are at the end of the list
    while(temp != NULL)
    {
        // print the current element
        cout << temp->data << " <---> ";

        // move on to the next element
        temp = temp->next;
    }
    cout << " NULL\n\n";
}

/*
Function: cleanup
Desc: deallocates space of all nodes from the given front node
Args: head -> pointer to head node of list to be deleted
Returns: None
*/
void cleanup(node* head)
{
    // create a temporary node for traversal
    node* temp = head;

    cout << "All Done. Cleaning Up.\n";
    // repeat until all nodes have been processed
    while(temp != NULL)
    {
        cout << "\tDelete " << temp->data << "\n";
        // move head to the next element
        head = head->next;

        // deallocate space of temp node
        free(temp);

        // point temp to current head node
        temp = head;
    }
    cout << "Finished Cleaning Up !!!\n";
}
