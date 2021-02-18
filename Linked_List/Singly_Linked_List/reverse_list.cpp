#include <iostream>
#include <stack>

using namespace std;

/*
Function: reverse_list
Args: head -> head pointer of list to be reversed
Desc: Reverses the given list and returns it
Returns: new_head -> head pointer to the reversed list
*/
node* reverse_list(node* head)
{
    // create a stack to keep track of items present in the list
    stack<int> node_stack;

    // create a temporary node to access the list
    node* temp = head;
    
    // iterate through list until last element
    while(temp != NULL)
    {
        // push the data in the current node to the stack
        node_stack.push( temp->data );

        // move on to the next node
        temp = temp->next;
    }
    
    // point the temp pointer to the head node for inserting
    temp = head;
    
    // repeat for all elements of stack
    while( node_stack.empty() == false )
    {
        // get the topmost element from the stack
        int data_item = node_stack.top();
        
        // remove the topmost element from the stack
        node_stack.pop();

        // add this data to the current node
        temp->data = data_item;

        // go to the next element
        temp = temp->next;
    }

    return head;
}
