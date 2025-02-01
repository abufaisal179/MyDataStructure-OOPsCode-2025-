// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <stack>
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
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memeory is free for data " << value << endl;
    }
};
Node *reverseWithLinks( Node *&head )
{
    if( head -> next == NULL )
    return head;

    Node *last = NULL;
    Node *curr = head;
    Node *temp;
    while( curr != NULL )
    {
        temp = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = temp;
        curr = curr -> prev;
    }
     head = temp -> prev;
}
void reverseNodeWithStack( Node *&head )
{
    stack<int>S1;
    Node *temp = head;
    while( temp != NULL )
    {
        S1.push( temp -> data);
        temp = temp -> next;
    }
     temp = head;
     while( temp != NULL )
    {
        temp -> data = S1.top();
        temp = temp -> next;
        S1.pop();
    }
}
void insertAtHead(int data, Node *&head)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        return;
    }
    Node *temp = new Node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;;
    }
    cout << endl;
}
int main(void)
{
    Node *head = NULL;

    insertAtHead(5, head);
    insertAtHead(23, head);
    insertAtHead(9, head);
    insertAtHead(4, head);
 

    print(head);
    reverseWithLinks(head);
    print(head);

    return 0;
}
