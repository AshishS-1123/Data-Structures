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

    /* TEST INSERT INTO STACK */
    s.insert(0);
    cout << "After Inserting 0\n";
    s.print_stack();

    s.insert(10);
    cout << "After Inserting 10\n";
    s.print_stack();

    s.insert(20);
    cout << "After Inserting 20\n";
    s.print_stack();

    s.insert(30);
    cout << "After Inserting 30\n";
    s.print_stack();

    s.insert(40);
    cout << "After Inserting 40\n";
    s.print_stack();
    
    /* TEST ACCESS TOP ELEMENT OF STACK */
    top_element = s.top();
    cout << "Accessed Top Element :: Top Is " << top_element << "\n\n";
    
    /* TEST REMOVE FROM STACK */
    top_element = s.pop();
    cout << "After Removing Top Element " << top_element << "\n";
    s.print_stack();

    top_element = s.pop();
    cout << "After Removing Top Element " << top_element << "\n";
    s.print_stack();

    top_element = s.pop();
    cout << "After Removing Top Element " << top_element << "\n";
    s.print_stack();

    top_element = s.pop();
    cout << "After Removing Top Element " << top_element << "\n";
    s.print_stack();
    
    /* TEST REMOVE FROM EMPTY STACK */
    cout << "After Removing From Empty Stack\n";
    top_element = s.pop();

    /* TEST INSERTION AFTER EMPTYING STACK */
    cout << "Trying To Insert Into Stack, Post Underflow\n";
    s.insert(0);
    s.print_stack();

    return 0;
}
