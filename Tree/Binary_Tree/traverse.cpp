#include <iostream>

using namespace std;

/*
Function: inorder_util
Desc: utility function for traversing inorder
Args: tree -> tree object to traverse
      idx -> index of node from where to traverse
Returns: None
*/
void inorder_util(binaryTree tree, int idx)
{
    // if this node does not exist
    if(idx == -1)
        return;

    // traverse the left child
    inorder_util(tree, tree.left_child(idx));

    // print the current element
    cout << tree.get_data(idx) << " ";

    // traverse the right child
    inorder_util(tree, tree.right_child(idx));
}

