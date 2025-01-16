// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev, *next;

    Node(int data)
    {
        this->data = data;
        prev = next = NULL;
    }
  
};
void insertAtHead(int data, Node *&head)
{
    Node *temp = new Node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;
}
void reverseNode( Node *&head )
{
    while( head != NULL )
    {
        head = head -> next;
    }
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head -> prev;
    }
    
}
int main(void)
{

    Node *head = new Node(9);
    Node *tail = head;
    insertAtHead(3, head);
    insertAtHead(23, head);
    insertAtHead(2, head);
    insertAtHead( 5, head );

    reverseNode( head );
 
    print( head );

    return 0;
}
