#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
Class: binaryTree
Desc: class for representing a binary tree.
      Representation is done using a set of 3 arrays-
        1. data -> array to hold the data of a node
        2. leftChild -> array to hold index of left child
        3. rightChild -> array to hold index of right child
Attr: data -> array to hold data of node
      leftChild -> array to hold index of left child
      rightChild -> array to hold index of right child
*/
class binaryTree
{
    //private:
    public:
        vector<int> data;
        vector<int> leftChild;
        vector<int> rightChild;
    public:
        /*
        Function: binaryTree
        Desc: constructor for Binary Tree class
        Args: None
        Returns: None
        */
        binaryTree()
        {

        }

        /*
        Function: left_child
        Desc: return left child of given node
        Args: idx -> index of element whose left child to return
        Returns: left -> index of left child of given element
        */

        int left_child(int idx)
        {
            return leftChild[idx];
        }

        /*
        Function: right_child
        Desc: return right child of given node
        Args: idx -> index of element whose right child to return
        Returns: right -> index of right child of given element
        */
        int right_child(int idx)
        {
            return rightChild[idx];
        }

        /*
        Function: empty
        Desc: checks if the tree is empty
        Args: None
        Returns: bool -> true of tree is empty, false otherwise
        */
        bool empty()
        {
            return (data.size() == 0);
        }

        /*
        Function: get_data
        Desc: returns data present in given node
        Args: idx -> index whose data to return
        Returns: data -> data present at given index
        */
        int get_data(int idx)
        {
            return data[idx];
        }

        /*
        Function: print_tree
        Desc: prints all vectors that represent the tree
        Args: None
        Returns: None
        */
        void print_tree()
        {
            cout << "\n\tData :: ";
            for(auto a : data) cout << a << " ";

            cout << "\n\tLeft ::";
            for(auto a : leftChild) cout << a << " ";

            cout << "\n\tRight::";
            for(auto a : rightChild) cout << a << " ";

            cout << "\n";
        }
        

};

