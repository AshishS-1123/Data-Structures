#include <iostream>

#include "doubly_circular_linked_list.cpp"
#include "insert_list.cpp"

using namespace std;

int main()
{
    // initialize the first node of list
    start = NULL;

    /* TEST INSERT INTO EMPTY */
    start = insert_element(start, 10, 0);

    /* TEST PRINT FORWARD SINGLE ELEMENT LIST */
    cout << "\nAfter insert element in empty list,\n"
         << "  List in Forward Direction\n";
    print_list_forward(start);

    /* TEST PRINT BACKWARD SINGLE ELEMENT LIST */
    cout << "  List in Reverse Direction\n";
    print_list_backward(start);

    /* TEST INSERT AT HEAD */
    start = insert_element(start, 0, 0);
    
    cout << "\nAfter inserting at head\n"
         << "  List in Forward Direction\n";
    print_list_forward(start);
    cout << "  List in Reverse Direction\n";
    print_list_backward(start);

    /* TEST POPULATING THE LIST */
    start = insert_element(start, 20, 2);
    start = insert_element(start, 30, 3);
    start = insert_element(start, 40, 4);
    start = insert_element(start, 50, 5);
    
    cout << "\nAfter inserting random elements in list,\n"
         << "  List in Forward Direction\n";
    print_list_forward(start);
    cout << "  List in Reverse Direction\n";
    print_list_backward(start);

    return 0;
}

