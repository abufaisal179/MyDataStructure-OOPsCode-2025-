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
    if( head == NULL )
    {
            Node *temp = new Node(data);
            head = temp;
            return;
    }
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

int main(void)
{
    Node *head = NULL;
    insertAtHead(8, head);
    insertAtHead( 4 , head);
    insertAtHead( 9 , head);
    insertAtHead( 3 , head);
    insertAtHead( 12 , head);
    insertAtHead( 23 , head );
    
    printAllData( head );

    return 0;
}
