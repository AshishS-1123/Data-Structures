#include <iostream>

#include "doubly_linked_list.cpp"
#include "insert_list.cpp"
#include "delete_list.cpp"
#include "reverse_list.cpp"

using namespace std;

int main()
{
    head = NULL;
    
    /* TEST INSERT INTO EMPTY LIST */
    head = insert_element(head, 10, 0);
    cout << "After inserting into empty list\n";
    print_list(head);

    /* TEST INSERT BEFORE HEAD */
    head = insert_element(head, 0, 0);
    cout << "After inserting before head node\n";
    print_list(head);

    /* TEST INSERT ANYWHERE IN LIST */
    head = insert_element(head, 30, 2);
    head = insert_element(head, 20, 2);
    cout << "After inserting 30 and 20\n";
    print_list(head);

    /* TEST INSERT AT END OF LIST */
    head = insert_element(head, 40, -1);
    cout << "After inserting at the end of the list\n";
    print_list(head);
    
    /* TEST DELETE AT HEAD */
    head = delete_element(head, 0);
    cout << "After deleting at head\n";
    print_list(head);

    /* TEST DELETE AT END */
    head = delete_element(head, 3);
    cout << "After deleting at end\n";
    print_list(head);

    /* TEST DELETE AT MIDDLE */
    head = delete_element(head, 1);
    cout << "After deleting at middle of list\n";
    print_list(head);
    
    /* TEST REVERSE OF LIST */
    head = insert_element(head, 0, 0);
    head = insert_element(head, 20, 2);
    head = insert_element(head, 40, 4);
    cout << "For testing reversing, inserting a few elements\n";
    cout << "New list is\n";
    print_list(head);
    head = reverse_list(head);
    cout << "After reversing\n";
    print_list(head);

    cout << "Program End ... Performing cleanup\n";
    cleanup(head);

    return 0;
}

