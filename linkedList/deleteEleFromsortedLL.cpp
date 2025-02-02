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
    cout << endl;
}
void deleteDuplicate(Node *&head)
{
    Node *curr = head;

    while (curr != NULL && curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
}
int main(void)
{

    Node *head = new Node(4);
    insertAtHead(9, head);
    insertAtHead(6, head);
    insertAtHead(3, head);
    insertAtHead(3, head);
    insertAtHead(3, head);
    insertAtHead(2, head);
    printAllData(head);
    deleteDuplicate(head);
    printAllData(head);

    return 0;
}
