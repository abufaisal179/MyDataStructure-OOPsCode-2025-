// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void insertAtHead(int data, Node *&head)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        return;
    }
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
Node *reverseNode(Node *&curr, Node *&prev)
{
    if( curr -> next == NULL )
    {
        return curr;
    }
    Node *forward;
    while ( curr != NULL )
    {
        forward = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
void print(Node *head)
{
    
   do
   {
      cout << head -> data << " ";
      head = head -> next;
   }while( head != NULL );
    
    cout << endl;
}

int main(void)
{

    Node *head = NULL;
    Node *prev = NULL;
    insertAtHead(4, head);
    insertAtHead(7, head);
    insertAtHead(9, head);
    insertAtHead(5, head);
    insertAtHead(12, head);

    print(head);

    prev = reverseNode(head, prev);

    print( prev );
    return 0;
}
