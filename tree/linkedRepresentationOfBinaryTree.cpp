// Hey guys, it's Faisal's Program : TITLE >> Binary Tree Node Creation
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor to initialize a Node
    Node(int value)
    {
        data = value;
        left =  NULL ;
        right = NULL;
    }
};

int main(void)
{
    // Create root node
    Node *root = new Node(10);

    // Create child nodes
    root->left = new Node(5);
    root->right = new Node(20);

    // Display data
    cout << "Root Node Data: " << root->data << endl;
    cout << "Left Child Data: " << root->left->data << endl;
    cout << "Right Child Data: " << root->right->data << endl;

    return 0;
}
