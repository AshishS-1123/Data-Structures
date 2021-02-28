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
        
        /*
        Function: overflow
        Desc: Checks if the stack has overflowed beyond its capacity
        Args: None
        Returns: overflow_occured -> bool values whether overflow occured
        */
        bool overflow()
        {
            // if stack is upto its capacity
            if(top_pointer == stack_data.size())
            {
                // set size of top pointer when overflow
                top_pointer = stack_data.size();

                // return overflow occured
                return true;
            }
            // otherwise, return not occured
            return false;
        }

        /*
        Function: underflow
        Desc: Checks if the stack is underflowing
        Args: None
        Returns: underflow_occured -> bool value whether underflow occured
        */
        bool underflow()
        {
            // check if stack is underflowing
            if(top_pointer < 0)
            {
                // set value of top pointer when empty
                top_pointer = -1;

                // returnunderflow occured
                return true;
            }
            // otherwise, return not occured
            return false;
        }

};
