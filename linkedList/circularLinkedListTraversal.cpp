// Hey guys , its Faisal's Program : TITLE >> { insertion using data }
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
bool isCircular( Node *&head )
{
    if( head == NULL || head -> next == head )
    return true;
    else if ( head -> next == NULL )
    return false;

    Node *temp = head;

    while( temp != NULL && temp != head)
    {
        temp = temp -> next;
    }

    if( temp == head )
    {
        return true;
    }
    return false;
}
void insertNode(int data, Node *&tail, int ele)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        tail->next = newNode;
    }

    Node *curr = tail;
    while (curr->data != ele)
    {
        curr = curr->next;
    }
    Node *newNode = new Node(data);
    newNode->next = curr->next;
    curr->next = newNode;
}

void printNode(Node *tail)
{

    while (tail->next != tail)
    {
        cout << tail->data << " ";
        tail = tail->next;
    }
}
int main(void)
{

    Node *tail = new Node(4);

    insertNode(5, tail, 4);
    insertNode(12, tail, 9);

    printNode(tail);

    if( isCircular(tail) == true )
    cout << "list is circular !! " << endl;
    else cout << "list is not circular !!" << endl; 

    return 0;
}
