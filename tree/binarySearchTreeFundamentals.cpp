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
    
    if (root == NULL)
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
bool binarySearch( Node *root , int target )
{
    if ( root == NULL )
    {
        return 0;
    }
    if( root -> data == target )
    {
        return 1;
    }
    if( root-> data > target )
    {
        return binarySearch( root -> left , target  );
    }
    else 
    {
        return binarySearch( root -> right , target );
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
  
    int result = binarySearch ( root , 18 );
    cout << "the result is : " << result;
   // preOrder(root);
    return 0;
}
