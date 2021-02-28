#include <iostream>
#include <vector>

using namespace std;

// Class for representing stack
class Stack
{
    private:
        // variable pointer to topmost element in stack
        int top_pointer;
        // variable to store actual data in stack
        vector<int> stack_data;

    public:
        /*
        Function: Stack
        Desc: Constructor
        Args: capacity -> capacity of data vector of stack
        Returns: New Stack Object
        */
        Stack(int capacity)
        {
            top_pointer = -1;
            stack_data.assign(capacity, 0);
            cout << "Creating a new Stack Object\n\n";
            cout << "\tInitialize Top to -1\n";
            cout << "\tInitialize Data Vector to capacity of " << capacity << "\n\n";
        }

};
