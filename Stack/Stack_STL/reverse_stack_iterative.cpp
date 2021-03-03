#include <iostream>
#include <stack>

using namespace std;

/*
Function: reverse_stack
Desc: reverses all elements in stack
Args: stk -> stack to be reversed
Returns: stk -> reversed stack
*/
stack<int> reverse_iterative(stack<int> s)
{
    // create a temporary stack to hold reversed stack
    stack<int> s_reverse;

    // repeat until all elements in s are done
    while(!s.empty())
    {
        // get the top element
        int top = s.top();
        // remove topmost element from stack
        s.pop();

        // insert the topmost element into s_reverse
        s_reverse.push(top);
    }

    // return the reversed stack
    return s_reverse;
}

