/**
 * David Joves 
 * 
 * Programming Assignment 4 - Insertion and Traversal of Binary Search Tree
 * 
 * Date - 14 - MAY - 2023

*/
//Specification File for BinarySearchTree
#ifndef BinaryTree_H
#define BinaryTree_H

using namespace std; 


class TreeNode
{
    public:
        int key; 
        TreeNode* left;
        TreeNode* right;


        TreeNode(int key)
        {
            this->key = key; 
            left = nullptr;
            right = nullptr; 
        }
};

class BinarySearchTree
{
    private: 
        TreeNode* root; 
        void inOrderTraversal(TreeNode*);
       
    
    public:
        //Constructor
        BinarySearchTree();

        void insert(int key);

        void inOrderTraversal()
        { inOrderTraversal(root); }

};
#endif