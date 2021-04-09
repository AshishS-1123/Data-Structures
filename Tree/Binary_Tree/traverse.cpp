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

/*
Function: traverse_postorder
Desc: performs postorder traversal of tree
Args: tree -> binaryTree object to traverse
Returns: None
*/
void traverse_postorder(binaryTree tree)
{
    // check if tree is empty
    if(tree.empty())
    {
        cout << "\n";
        return;
    }

    // traverse the tree
    postorder_util(tree, 0);
    cout << "\n";
}

/*
Function: traverse_level
Desc: prints level order traversal of tree
Args: tree -> tree to be traversed
Returns: None
*/
void traverse_level(binaryTree tree)
{
    // check if tree is empty
    if(tree.empty())
    {
        cout << "\n";
        return;
    }

    // create queue for traversal
    queue<int> q;

    // insert first element to queue
    q.push(0);

    // repeat until all element processed
    while(!q.empty())
    {
        // pop element from queue
        int idx = q.front();
        q.pop();

        // print this element
        cout << tree.get_data(idx) << " ";

        // if this node has left child
        if(tree.left_child(idx) != -1)
            // add it to the queue
            q.push(tree.left_child(idx));
            
        // if this node has right child
        if(tree.right_child(idx) != -1)
            // add it to the queue
            q.push(tree.right_child(idx));
    }
}
