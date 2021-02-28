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
        
        /*
        Function: top
        Desc: Returns the topmost element of stack
        Args: None
        Returns: top_element -> topmost element of stack
        */
        int top()
        {
            // check that some elements exist in the stack
            if( underflow() )
            {
                cout << "\tStack Has No Elements. Stack Underflow\n\n";
                return -1;
            }

            // return the top element
            return stack_data[top_pointer];
        }

        /*
        Function: insert
        Desc: Inserts new element into the stack
        Args: element -> element to be inserted
        Returns: None
        */
        void insert(int element)
        {
            // increment the top pointer
            ++top_pointer;

            // check if we are still withing the capacity limit
            if( overflow() )
            {
                cout << "\tCould Not Insert. Stack Overflow\n\n";
                return;
            }

            // insert the new element at this new position
            stack_data[top_pointer] = element;
        }

        /*
        Function: pop
        Desc: Removes and returns the topmost element of stack
        Args: None
        Returns top_element -> topmost element of stack
        */
        int pop()
        {
            // get the topmost element
            int top_element = top();

            // decrement the top pointer
            --top_pointer;

            // check if any more elements can be removed
            if( underflow() )
            {
                cout << "\tNo More Elements Present. Stack Underflow\n\n";
                return -1;
            }

            // return the top element
            return top_element;
        }



};
