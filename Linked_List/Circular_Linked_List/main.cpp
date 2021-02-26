#include <iostream>

#include "circular_linked_list.cpp"
#include "insert_list.cpp"
#include "delete_list.cpp"

using namespace std;

int main()
{
    // pointer to any node in the list
    start = NULL;

    /* TEST INSERT INTO EMPTY */
    start = insert_element(start, 0, 0);
    cout << "For Insert Into Empty List,\n";
    print_list(start);

    /* TEST INSERT INTO LIST */
    start = insert_element(start, 10, 1);
    cout << "After Inserting 0\n";
    print_list(start);
    
    start = insert_element(start, 20, 2);
    cout << "After Inserting 20\n";
    print_list(start);

    /* TEST INSERT USING MOD VALUE */
    start = insert_element(start, 30, 6);
    cout << "Inserting at position larger than size of list\n";
    print_list(start);

    /* TEST DELETE NODE AT START */
    start = delete_element(start, 3);
    cout << "After Deleting Element\n";
    print_list(start);

    cout << "Done Processing... Performing Cleanup\n";
    cleanup(start);

    return 0;
}
