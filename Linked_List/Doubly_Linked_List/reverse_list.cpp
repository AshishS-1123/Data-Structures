#include <iostream>

using namespace std;

/*
Function: reverse_list
Desc: reverses the given list and returns head pointer to it
Args: head -> headpointer of list to reverse
Returns: head -> head pointer to reverse list
*/
node* reverse_list(node* head)
{
    // pointer to first element in list
    node* front = head;
    // pointer to last element in list
    node* rear = head;

    // traverse the list until rear points to end of list
    while(rear->next != NULL)
        rear = rear->next;

    while(1)
    {
        // if there are even elements in list,
        // ocndition to break is
        if(front->next == rear)
            break;
        // if there are odd elements in list,
        // condition to break is
        if(front == rear)
            break;
        // on the off chance both conditions are not satisfied
        // break in case infinite loop
        if(front->next == NULL || rear->prev == NULL)
            break;

        // swap the data in front and rear pointer
        int temp = front->data;
        front->data = rear->data;
        rear->data = temp;

        // increment front pointer
        front = front->next;
        // decrement rear pointer
        rear = rear->prev;
    }

    return head;
}
