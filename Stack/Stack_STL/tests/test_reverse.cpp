#include <iostream>
#include <stack>

#include "../reverse_stack_iterative.cpp"
#include "../reverse_stack_recursive.cpp"

using namespace std;

void show_stack(stack<int> s)
{
    cout << "Stack is now ::\n\t";

    // repeat until some elements are present in stack
    while(!s.empty())
    {
        // get topmost element
        int top = s.top();

        // remove topmost element
        s.pop();

        // print current element
        cout << top << " ";
    }
    cout << "\n\n";
}

int main()
{
    // create stack to reverse
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Original Stack\n";
    show_stack(s);

    stack<int> reverse_iter = reverse_iterative(s);
    cout << "After Iterative Reversal\n";
    show_stack(reverse_iter);

    stack<int> reverse_recur = reverse_recursive(s);
    cout << "After Recursive Reversal\n";
    show_stack(reverse_recur);


    return 0;
}

