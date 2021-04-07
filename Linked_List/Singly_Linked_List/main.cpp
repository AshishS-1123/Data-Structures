#include <iostream>

// include custom header files
#include "linked_list.cpp"
#include "insert_list.cpp"
#include "delete_list.cpp"
#include "reverse_list.cpp"
#include "length_list.cpp"
#include "search_list.cpp"
#include "nth_node.cpp"

int main()
{
    /* INSERT ELEMENT INTO EMPTY LIST */
    HEAD = insert_element(HEAD, 10, 0);
    cout << "After inserting element to empty list\n";
    print_list(HEAD);

    /* INSERT ELEMENT BEFORE HEAD NODE */
    HEAD = insert_element(HEAD, 0, 0);
    cout << "After inserting before head node\n";
    print_list(HEAD);

    /* INSERT ELEMENT ANYWHERE IN LIST */
    HEAD = insert_element(HEAD, 30, 2);
    HEAD = insert_element(HEAD, 20, 1);
    cout << "After inserting 30 and 20 into the list\n";
    print_list(HEAD);

    /* INSERT ELEMENT AT THE END OF LIST */
    HEAD = insert_element(HEAD, 40, -1);
    cout << "After inserting element at end of list\n";
    print_list(HEAD);

    /* FIND LENGTH OF LIST */
    cout << "Length of list (iterative)::" << find_length_iterative(HEAD)
         << "\nLength if list (recursive)::" << find_length_recursive(HEAD)
         << "\n\n";

    /* SEARCH ELEMENT IN LIST ITERATIVELY */
    if(search_iterative(HEAD, 20) == true)
        cout << "Iterative search: Found 20\n";
    else
        cout << "Iterative search: Not found 20\n";
    
    if(search_iterative(HEAD, 25) == true)
        cout << "Iterative search: Found 25\n";
    else
        cout << "Iterative search: Not found 25\n\n";
    
    /* SEARCH ELEMENT IN LIST RECURSIVELY */
    if(search_recursive(HEAD, 20) == true)
        cout << "Recursive search: Found 20\n";
    else
        cout << "Recursive search: Not found 20\n";
    
    if(search_recursive(HEAD, 25) == true)
        cout << "Recursive search: Found 25\n\n";
    else
        cout << "Recursive search: Not found 25\n\n";

    /* DELETE HEAD NODE FROM LIST */
    HEAD = delete_element(HEAD, 0);
    cout << "After deleting head node of list\n";
    print_list(HEAD);

    /* DELETE LAST ELEMENT FROM LIST */
    HEAD = delete_element(HEAD, 4);
    cout << "After deleting last node from list\n";
    print_list(HEAD);

    /* DELETE ELEMENT FROM THE MIDDLE OF THE LIST */
    HEAD = delete_element(HEAD, 1);
    cout << "After deleting from the middle of list\n";
    print_list(HEAD);

    /* ADD A FEW MORE ELEMENTS TO THE LIST AND REVERSE IT */
    HEAD = insert_element(HEAD, 0, 0);
    HEAD = insert_element(HEAD, 20, 1);
    HEAD = insert_element(HEAD, 40, 3);
    cout << "For testing reverse_list, inserting a few elements\n";
    cout << "New list is\n";
    print_list(HEAD);
    HEAD = reverse_list(HEAD);
    cout << "After reversing list\n";
    print_list(HEAD);

    /* GET ELEMENT AT INDEX 3 */
    cout << "Element at index 3 in list is :: ";
    cout << get_element_at_index(HEAD, 3);
    cout << "\n\n";

    /* CLEANUP LIST FROM MEMORY */
    cout << "Program End... Performing cleanup\n";
    cleanup(HEAD);
    return 0;
}
