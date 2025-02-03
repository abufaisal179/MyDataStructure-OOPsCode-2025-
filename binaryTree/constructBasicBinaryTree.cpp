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
int main(void)
{

    Node *root = new Node(10);

    root->left = new Node(4);
    root->right = new Node(71);

    cout << "the root data is : " << root->data <<  endl  << "the root right data is : " << root->right->data << endl << "the root left data is :" << root->left->data << endl;
    return 0;
}
