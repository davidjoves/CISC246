#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
    BinarySearchTree bst;

    // Prompt the user to enter 10 integers
    cout << "Please enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        int key;
        cin >> key;
        bst.insert(key);
    }

    // Print the in-order traversal of the tree
    cout << "In-order traversal: ";
    bst.inOrderTraversal();
    cout << endl;

    return 0;
}