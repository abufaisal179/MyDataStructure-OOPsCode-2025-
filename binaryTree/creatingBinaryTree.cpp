// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <queue>
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
Node *buildTree(Node *&root)
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
void levelOrderTraversal( Node *root )
{
  queue<Node*>q;

  q.push( root );

  while (!q.empty())
  {
      Node *temp = q.front();
      cout << temp -> data << " ";
      q.pop();

      if( temp -> left != NULL )
      {
          q.push( temp -> left );
      }
      if( temp -> right != NULL )
      {
          q.push( temp -> right );
      }
  }
  
}
int main(void)
{
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
  Node *root = NULL;
  buildTree(root);
  cout << "the level order traversal is : " << endl;
  levelOrderTraversal( root );
    return 0;
}
