// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <map>
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
bool loopPresentOrNor( Node *&head )
{
     Node *temp = head;
     map< Node* , bool> visited;

     if( head -> next == NULL )
     {
        return false;
     }

     while( temp != NULL )
     {
        if( visited[temp] == true )
        {
            return true;
        }
       visited[temp] = true;

        temp = temp -> next;
     }

    return false;

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
    
    tail -> next = head -> next -> next;
    //printAllData(head);

    if( loopPresentOrNor( head ))
    {
        cout << " loop present " << endl;
    }
    else cout << "not present " << endl;

    return 0;
}
