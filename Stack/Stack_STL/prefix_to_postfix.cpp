#include <iostream>
#include <stack>

using namespace std;

string prefix_postfix_convert(string prefix)
{
    // create a stack for processing
    stack<string> s;
    
    // repeat for all elements of string in reverse order
    for(int i = prefix.size() - 1; i != -1; --i)
    {
        // if element is operand
        if(isalpha(prefix[i]))
            // push it to stack
            s.push(string(1, prefix[i]));
        // if element is operator
        else
        {
            // pop the last 2 elements
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            // calculate result of these 2 operands
            string result = op1 + op2 + prefix[i];
            // push this result to stack
            s.push(result);
        }
    }

    // top element of stack is converted expression
    return s.top();
}

