#include <iostream>
#include <stack>

using namespace std;

string postfix_prefix_convert(string postfix)
{
    // create stack for processing
    stack<string> s;

    // scan elements from left to right
    for(int i = 0; i < postfix.size(); ++i)
    {
        // if current element is a operand
        if(isalpha(postfix[i]))
            // push it to stack
            s.push(string(1, postfix[i]));
        // it is an operator
        else
        {
            // pop 2 elements from stack
            string op2 = s.top();
            s.pop();
            string op1 = s.top();
            s.pop();

            // get the result of these operands
            string result = postfix[i] + op1 + op2;
            // push result to stack
            s.push(result);
        }
    }

    // topmost element contains converted expression
    return s.top();
}

