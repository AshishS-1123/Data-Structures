#include <iostream>

#include "stack.cpp"

using namespace std;

int main()
{
    // create a new stack object
    Stack s(5);

    /* TEST ACCESSING TOP OF EMPTY STACK */
    cout << "Trying To Get Top Element From Empty Stack\n";
    int top_element = s.top();
    if(top_element != -1)
        cout << "Topmost element in stack is " << top_element << "\n";

    
    return 0;
}
