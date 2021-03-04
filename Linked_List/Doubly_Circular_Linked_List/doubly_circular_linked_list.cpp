#include <iostream>

using namespace std;

// structure to denote node in list
typedef struct node
{
    // member to hold data of node
    int data;
    // pointer to next node
    struct node* next;
    // pointer to previous node
    struct node* prev;
}node;

// a node to point to some element in the list
node* start;
/*
Function: preety_print
Desc: utility for printing elements in intuitive format
Args: element -> element if list that is going to be printed
Returns: preety_string -> prettified string version for element
*/
string preety_print(int element)
{
    int dashes = to_string(element).size() + 7;

    string preety_string;

    for(int i = 0; i < dashes; ++i)
        preety_string += "_";

    return preety_string;
}

/*
Function: print_list_forward
Desc: prints the given circular linked list
Args: start -> any pointer pointing to a node in the list
Returns: None
*/
void print_list_forward(node* start)
{
    // node for traversing the list
    node* end = start;

    // if there is a single element in the list
    if(start->next == start)
    {
        cout << "\t" << start->data << "\n\n";
        return;
    }
    
    cout << "\t";
    string line_below("        |");
    // keep traversing the list until we reach the start node
    do
    {
        // print the current node
        cout << end->data;

        if(end->next != start)
        {
            line_below += preety_print(end->data);
            cout << " <---> ";
        }

        // move end to next node
        end = end->next;
    }while(end != start);

    line_below[line_below.size()-1] = '|';
    cout << "\n" << line_below <<"\n\n";
}

/*
Function: print_list_backward
Desc: prints the given circular linked list
Args: start -> any pointer pointing to a node in the list
Returns: None
*/
void print_list_backward(node* start)
{
    // node for traversing the list
    node* end = start;

    // if there is a single element in the list
    if(start->prev == start)
    {
        cout << "\t" << start->data << "\n\n";
        return;
    }
    
    cout << "\t";
    string line_below("        |");
    // keep traversing the list until we reach the start node
    do
    {
        // print the current node
        cout << end->data;

        if(end->prev != start)
        {
            line_below += preety_print(end->data);
            cout << " <---> ";
        }

        // move end to next node
        end = end->prev;
    }while(end != start);

    line_below[line_below.size()-1] = '|';
    cout << "\n" << line_below <<"\n\n";
}

/*
Function: cleanup
Desc: deallocates memory of all nodes in list
Args: start -> pointer to any node in list
Returns: None
*/
void cleanup(node* start)
{
    // pointer for traversal
    node* end = start;

    // loop through all the nodes
    do
    {
        cout << "\tDelete " << end->data << "\n";
        // temporarily hold location of end node
        node* temp = end;
        
        // increment the end node
        end = end->next;
        
        // deallocate the current node
        free(temp);

    }while(end != start);

}
