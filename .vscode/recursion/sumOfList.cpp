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
    cout << endl;
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
int recSum( Node *&head , int sum )
{
      if( head == NULL )
      {
          return sum;
      }

     recSum( head -> next , sum + head -> data );
      
}
int main(void)
{

    Node *head = new Node(4);
    Node *tail = head;
    insertAtHead(8, head);
    insertAtTail(6, tail);
    insertAtTail(5, tail);
    printAllData( head );

    cout << "the sum of numbers is : " << recSum( head , 0);

    return 0;
}
