// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
        ;
    }
};
Node *buildTree(Node *root)
{
    int data;
    cout << "enter data : ";
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter the value for inserting in the left of the " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter the value for inserting in the right of the " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
int main(void)
{
    Node *root = NULL;
  buildTree(root);
    return 0;
}
