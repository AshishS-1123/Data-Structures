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

/*
Function: traverse_inorder
Desc: performs inorder traversal of tree
Args: tree -> binaryTree object to traverse
Returns: None
*/
void traverse_inorder(binaryTree tree)
{
    // check if tree is empty
    if(tree.empty())
    {
        cout << "\n";
        return;
    }

    // traverse the tree
    inorder_util(tree, 0);
    cout << "\n";

}

/*
Function: preorder_util
Desc: utility function for traversing preorder
Args: tree -> tree object to traverse
      idx -> index of node from where to traverse
Returns: None
*/
void preorder_util(binaryTree tree, int idx)
{
    // if this node does not exist
    if(idx == -1)
        return;

    // print the current element
    cout << tree.get_data(idx) << " ";

    // traverse the left child
    preorder_util(tree, tree.left_child(idx));

    // traverse the right child
    preorder_util(tree, tree.right_child(idx));
}

/*
Function: traverse_preorder
Desc: performs preorder traversal of tree
Args: tree -> binaryTree object to traverse
Returns: None
*/
void traverse_preorder(binaryTree tree)
{
    // check if tree is empty
    if(tree.empty())
    {
        cout << "\n";
        return;
    }

    // traverse the tree
    preorder_util(tree, 0);
    cout << "\n";
}

/*
Function: postorder_util
Desc: utility function for traversing postorder
Args: tree -> tree object to traverse
      idx -> index of node from where to traverse
Returns: None
*/
void postorder_util(binaryTree tree, int idx)
{
    // if this node does not exist
    if(idx == -1)
        return;

    // traverse the left child
    inorder_util(tree, tree.left_child(idx));

    // traverse the right child
    inorder_util(tree, tree.right_child(idx));

    // print the current node
    cout << tree.get_data(idx) << " ";
}

