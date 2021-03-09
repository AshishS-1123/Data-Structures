#include <iostream>
#include <stack>

using namespace std;

/*
Function: prefix_infix_convert
Desc: converts prefix expression to infix expression
Args: pre -> prefix expression
Returns: in -> converted expression
*/
string prefix_to_infix(string pre)
{
    // stack for operations
    stack<string> s;

    // iterate through every element
    for(int i = pre.size()-1; i > -1; --i)
    {
        // check if element is operand
        if(isalpha(pre[i]))
        {
            s.push( string(1, pre[i]) );
        }
        else
        {
            string temp_exp = "(" + s.top();
            s.pop();
            temp_exp += pre[i] + s.top() + ")";
            s.pop();

            s.push(temp_exp);
        }
    }
    
    return string(s.top());
}
