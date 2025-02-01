// Hey guys , its Faisal's Program : TITLE >> {reverse linked list}
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
    if( head == NULL )
    {
            Node *temp = new Node(data);
            head = temp;
            return;
    }
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void reverseNode( Node *&head )
{
    Node *forward = NULL;
    Node *prev = NULL;
    Node *curr = head;

    while( curr != NULL )
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    } 
    head = prev;
}
void printAllData(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(void)
{
    Node *head = NULL;
    insertAtHead(8, head);
    insertAtHead( 4 , head);
    insertAtHead( 9 , head);
    insertAtHead( 3 , head);
    insertAtHead( 12 , head);
    insertAtHead( 23 , head );
    
    cout << "original data >>" << endl;
    printAllData( head );

    reverseNode( head );

    cout << "reversed data >>" << endl;
    printAllData(head);

    return 0;
}
