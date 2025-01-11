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
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void printAllData(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtMiddle( int data , Node *head , int n )
{
    
}
void insertAtTail(int data, Node *&tail)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}
int main(void)
{

    Node *node = new Node(4);
    Node *tail = node;

    insertAtTail(6, node);
    insertAtTail(5, node);
    insertAtTail(3, node);
    insertAtTail(89, node);

    printAllData(tail);

    return 0;
}
