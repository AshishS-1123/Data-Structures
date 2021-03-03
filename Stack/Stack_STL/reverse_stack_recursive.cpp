#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

/*
Function: insert_bottom
Desc: utility function for reverse_recursive. Insert element at bottom of stack
Args: element -> element to insert at bottom of stack
Returns: None
*/
void insert_bottom(int element)
{
    // if stack is already empty
    if(s.empty())
    {
        s.push(element);
        return;
    }

    // get top element
    int top = s.top();

    // remove top element
    s.pop();

    // recurse to next element
    insert_bottom(element);

    // now, stack is empty. Insert element here
    s.push(top);
}

/*
Function: reverse_recurse_called
Desc: Utility for reverse_recursive. Handles reversing with global stack variable
Args: None
Returns: None
*/
void reverse_recurse_called()
{
    // check if stack is not empty
    if(!s.empty())
    {
        // get the top element
        int top = s.top();

        // remove topmost element
        s.pop();

        // remove the next element
        reverse_recurse_called();

        // after all elements have been reversed
        // insert current top element at the bottom
        insert_bottom(top);
    }
}

/*
Function: reverse_recursive
Desc: reverse given stack in place using recursion
Args: stk -> stack to be reversed
Returns: s -> reversed stack
*/
stack<int> reverse_recursive(stack<int> stk)
{
    // store this stack in global stack
    s = stk;

    // reverse using recursize method
    reverse_recurse_called();

    // return the global stack storing reversed stack
    return s;
}

