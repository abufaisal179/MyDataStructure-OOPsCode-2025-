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
void insertAtHead(int data, Node *&head)
{
    Node *temp = new Node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(int data, Node *&tail)
{
    Node *temp = new Node(data);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtMiddle(int data, Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        insertAtHead(data, head);
        return;
    }
    int count = 1;
    Node *nodeToInsert = new Node(data);
    Node *temp = head;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL && count == position - 1)
    {
        insertAtTail(data, tail);
        return;
    }
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteNode(Node *&head, int position)
{
    Node *temp = head;
    if (position == 1)
    {
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    else 
    {
        // deleting any middle node or last node 
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while( count < position )
        {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
void print(Node *head)
{
    int length = 0;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
        length++;
    }
    cout << endl;
    // cout << endl << "length : " << length;
}
int main(void)
{

    Node *head = new Node(5);
    Node *tail = head;
    insertAtHead(3, head);
    insertAtHead(23, head);
    insertAtHead(2, head);

    insertAtTail(21, tail);
    insertAtTail(4, tail);
    insertAtTail(34, tail);

    insertAtMiddle(19, head, tail, 8);
    print(head);
    deleteNode(head, 3);
    print(head);

    cout << endl
         << "head >> " << head->data << " || tail >> " << tail->data << endl;
    return 0;
}
