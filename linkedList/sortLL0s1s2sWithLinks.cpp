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
void insertAtTail(Node *&curr, Node *&tail)
{
    tail->next = curr;
    tail = curr;
}
void Sort(Node *&head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {

        if (curr->data == 0)
        {
            insertAtTail(curr, zeroTail);
        }
        else if (curr->data == 1)
        {
            insertAtTail(curr, oneTail);
        }
        else if( curr -> data == 2 )
        {
            insertAtTail(curr, twoTail);
        }

        curr = curr->next;
    }

    if( oneHead -> next != NULL )
    {
         zeroTail -> next = oneHead -> next;
    }
    else 
    {
        zeroTail -> next = twoHead -> next;
    }
    if( oneHead -> next == NULL )
    {
    oneTail -> next = twoHead -> next;
    }
    twoTail -> next = NULL;
    head = zeroHead -> next;



    delete zeroHead;
    delete oneHead;
    delete twoHead;
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
    cout << endl;
}

int main(void)
{

    Node *head = new Node(2);

   // insertAtHead(1, head);
    insertAtHead(0, head);
    insertAtHead(0, head);
   // insertAtHead(1, head);
    insertAtHead(2, head);
    insertAtHead(0, head);
  //  insertAtHead(1, head);
    insertAtHead(2, head);

    printAllData(head);
    Sort(head);
    printAllData(head);
    return 0;
}
