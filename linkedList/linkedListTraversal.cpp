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
void insertAtTail(int data, Node *&tail)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
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
void insertAtMiddle(int data, Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        insertAtHead(data, head);
        return;
    }
    int count = 1;
    Node *temp = head;
    while (count < position - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(data, tail);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
bool isCircular(Node *&head) {
    if (head == NULL) 
        return true;  // An empty list is considered circular
    if (head->next == head) 
        return true;  // A single node pointing to itself is circular
    if( head -> next == NULL )
    return false;

    Node *temp = head->next;  // Start from the second node

    // Traverse the list and check if we reach back to the head
    while (temp != NULL && temp != head) {
        temp = temp->next;
    }

    return (temp == head);  // If we reach back to the head, the list is circular
}
int main(void)
{

    Node *head = new Node(4);
    Node *tail = head;
    insertAtHead(8, head);
    insertAtTail(6, tail);
    insertAtTail(5, tail);
    insertAtTail(3, tail);
    insertAtTail(89, tail);
    insertAtMiddle(14, head, tail, 3);
    printAllData(head);

    cout << endl  
         << "head >> "<< head->data;
    cout << endl 
         << "tail >> "<< tail->data;

    cout << endl;
    if( isCircular(head) == true ) cout << "the list is circular ";
    else cout<< "list is not circular ";


    return 0;
}
