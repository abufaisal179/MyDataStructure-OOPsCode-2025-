// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node *binaryTree()
{
    int x;
    cin >> x;

    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "enter the left side data of Node :";
    temp->left = binaryTree();
    cout << "enter the right side data of Node :";

    temp->right = binaryTree();

    return temp;
}
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";

    preOrder(root->left);
    preOrder(root->right);
}
int main(void)
{

      // Create the binary tree
    cout << "Start building the binary tree:" << endl;
    Node* root = binaryTree();

    // Perform PreOrder traversal
    cout << "\nPreOrder Traversal of the Binary Tree:" << endl;
    preOrder(root);
    return 0;
}
