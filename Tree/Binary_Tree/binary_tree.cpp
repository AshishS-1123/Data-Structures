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
        
        /*
        Function: insert_element
        Desc: insert element in tree
        Args: element -> element to insert
        Returns: None
        */
        void insert_element(int element)
        {
            // check if tree is empty
            if(data.size() == 0)
            {
                // insert element in data array
                data.push_back(element);

                // mark left child index for this element as -1
                leftChild.push_back(-1);
                // mark right child index for this element as -1
                rightChild.push_back(-1);

                return;
            }

            // create a queue for traversal
            queue<int> q;
            // add first element of tree to queue
            q.push(0);
            
            // repeat until all element processed
            while(!q.empty())
            {
                // pop element from queue
                int top_idx = q.front();
                q.pop();

                // check if left child for this node is present
                if(leftChild[top_idx] != -1)
                    // add this node to queue
                    q.push(leftChild[top_idx]);
                // otherwise
                else
                {
                    // add the new element to data vector
                    data.push_back(element);

                    // set the left child of new node to -1
                    leftChild.push_back(-1);
                    // set the right child of new node to -1
                    rightChild.push_back(-1);

                    // mark this as left child of current node
                    leftChild[top_idx] = data.size() - 1;

                    // exit the code
                    return;

                }

                // check if right child for this is present
                if(rightChild[top_idx] != -1)
                    // add this node to queue
                    q.push(rightChild[top_idx]);
                // otherwise
                else
                {
                    // add the new element to the data vector
                    data.push_back(element);

                    // set the left child of new node to -1
                    leftChild.push_back(-1);
                    // set the right child of new node to -1
                    rightChild.push_back(-1);

                    // mark this as right child of current node
                    rightChild[top_idx] = data.size() - 1;

                    // exit the code
                    return;
                }
            }

        }

};

