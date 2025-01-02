// C++ program for preorder traversals

#include <iostream>
using namespace std;

// Structure of a Binary Tree Node
struct Node {
    int data;
    struct Node *left, *right;
    Node(int v)
    {
        data = v;
        left = right = nullptr;
    }
};

// Function to print preorder traversal
void printPreorder( Node* node)
{
    if (node == nullptr)
        return;

    // Deal with the node
    cout << node->data << " ";

    // Recur on left subtree
    printPreorder(node->left);
    // char i = 'A';
    //  cout << i++ <<  " ";
    
    // Recur on right subtree
    printPreorder(node->right);
}

// Driver code
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    // Function call
    cout << "Preorder traversal of binary tree is: \n";
    printPreorder(root);

    return 0;
}