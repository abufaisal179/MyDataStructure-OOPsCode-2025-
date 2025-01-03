// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *insert(Node *root, int target)
{
    if (!root)
    {
        Node *temp = new Node(target);
        return temp;
    }

    if (target < root->data)
    {
        root->left = insert(root->left, target);
    }
    else
    {
        root->right = insert(root->right, target);
    }

    return root;
}
void preOrder( Node *root )
{
    if( root != NULL )
    {
         preOrder( root -> left );
         cout << root -> data << " ";
         preOrder( root -> right );
    }
}
int main(void)
{
   int arr[] = { 6 , 3 , 11 , 5 , 7 , 18 , 12 , 2 ,11 };


    Node *root = NULL; 
   for( int i=0; i<10; i++ )
   {
       root = insert( root , arr[i] );
   }

   preOrder(root);
    return 0;
}
