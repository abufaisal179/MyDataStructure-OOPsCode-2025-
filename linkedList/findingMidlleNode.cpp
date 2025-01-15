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
Node *findMiddle(Node *&head)
{
    if( head == NULL || head -> next == NULL)
    return head;
    
    Node *pro = head;
    Node *noob = head;
    while (pro != NULL && pro->next != NULL)
    {
        pro = pro->next->next;
        noob = noob->next;
    }

    return noob;
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
    insertAtHead(18, head);

    print(head);

    Node *mid = findMiddle(head);

    cout << "the mid is : " << mid->data << endl;

    return 0;
}
