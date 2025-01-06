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
void insertAtHead(int data, Node *head)
{
    Node *temp = new Node(data);
    head->next = temp;
    head = temp;
}
void displayLinkedListElement(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main(void)
{

    Node *head = new Node(4);

    insertAtHead(3, head);
    insertAtHead(7, head);
    insertAtHead(12, head);
    insertAtHead(9, head);

    displayLinkedListElement(head);

    return 0;
}
