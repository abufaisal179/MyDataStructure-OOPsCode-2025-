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
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        return;
    }

    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
int countNode( Node *head )
{
    int count = 0;

    while ( head != NULL ) 
    {
        head = head -> next;
        count++;
    }
    return count;
}
Node *findMiddle(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *curr = head->next->next;
    Node *prev = head;

    while (curr != NULL)
    {
        curr = curr->next;
        if (curr != NULL)
        {
            curr = curr->next;
        }
        prev = prev -> next;
    }
    int count = countNode(head);
    if( count % 2 == 0 )
    prev = prev -> next;

    return prev;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(void)
{

    Node *head = NULL;

    insertAtHead(5, head);
    insertAtHead(34, head);
    insertAtHead(8, head);
    insertAtHead(12, head);
    insertAtHead(9, head);
    insertAtHead( 45 , head);
    insertAtHead( 51 , head);


    print(head);

    Node *mid = findMiddle(head);

    cout << "the mid is : " << mid->data << endl;

    return 0;
}
