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
        
    }
};
Node* postOrder( Node *root )
{
    if( root == NULL )
    {
        return NULL;
    }

    postOrder( root -> left );
    postOrder( root -> right );
    cout << root -> data << " ";


    return root;
}
Node* insertInBtree( Node *&root )
{
    cout << "enter data : ";
    int data;
    cin >> data;
    root = new Node(data);
    if( root -> data == -1 )
    return NULL;
    

    cout << "enter the data of left sub tree : " << root -> data << endl;
    root -> left = insertInBtree( root -> left );

    cout << "enter the data of right sub tree : " << root -> data << endl;
    root -> right = insertInBtree( root -> right );
  

    return root;

}
int main(void)
{

    Node *root = NULL ;

    // 4 9 7 -1 -1 -1 8 -1 -1

    insertInBtree ( root );
    postOrder( root );
    
    return 0;
}
