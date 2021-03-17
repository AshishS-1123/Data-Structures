#include <iostream>
#include <stack>

using namespace std;

string postfix_infix_convert(string postfix)
{
    // create stack for processing
    stack<string> s;

    // scan elements from left to right
    for(int i = 0; i < postfix.size(); ++i)
    {
        // if element is operand
        if(isalpha(postfix[i]))
            // push to stack
            s.push(string(1, postfix[i]));
        // if element is operator
        else
        {
            // pop last 2 operands from stack
            string op2 = s.top();
            s.pop();
            string op1 = s.top();
            s.pop();

            // calculate result of operands
            string result = "(" + op1 + postfix[i] + op2 + ")";
            // push result into stack
            s.push(result);
        }
    }

    // top of stack contains result of conversion
    return s.top();
}


