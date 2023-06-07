#include "BinaryTree.h"
#include <iostream>
//Implementation File for BinarySearchTree

using namespace std;
BinarySearchTree :: BinarySearchTree()
{
    root = nullptr;
}
void BinarySearchTree :: insert(int key) 
{

    TreeNode* nodePtr = nullptr; //Traverse tree

    if(root == nullptr)
    {
        root = new TreeNode(key);
        return;
    }

    nodePtr = root; 
    while(nodePtr != nullptr)
    {
        if(key < nodePtr->key)
        {
            if(nodePtr->left == nullptr)
            {
                nodePtr->left = new TreeNode(key);
                return;
            }

            nodePtr = nodePtr-> left;
        }
        else if (key > nodePtr->key)
        {
            if(nodePtr->right == nullptr)
            {
                nodePtr->right = new TreeNode(key);
                return;
            }

            nodePtr = nodePtr->right;     
        }

        else
        {
            return;
        } 

    }
}
void BinarySearchTree::inOrderTraversal(TreeNode* node)
{
    if (node != nullptr)
    {
        inOrderTraversal(node->left);
        cout << node->key << " ";
        inOrderTraversal(node->right);
    }
}

