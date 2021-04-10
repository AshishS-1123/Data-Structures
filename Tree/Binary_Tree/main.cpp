#include <iostream>

#include "binary_tree.cpp"
#include "traverse.cpp"

using namespace std;

int main()
{
    // create a tree object
    binaryTree tree = binaryTree();

    // insert 10, 20, 30, 40, 50, 60

    cout << "\nAfter adding 10...";
    tree.insert_element(10);
    tree.print_tree();

    cout << "\nAfter adding 20...";
    tree.insert_element(20);
    tree.print_tree();

    cout << "\nAfter adding 30...";
    tree.insert_element(30);
    tree.print_tree();

    cout << "\nAfter adding 40...";
    tree.insert_element(40);
    tree.print_tree();

    cout << "\nAfter adding 50...";   
    tree.insert_element(50);
    tree.print_tree();

    cout << "\nAfter adding 60...";
    tree.insert_element(60);
    tree.print_tree();

    // print inorder traversal of tree
    cout << "\nInorder traversal of tree::\n\t";
    traverse_inorder(tree);

    return 0;
}


