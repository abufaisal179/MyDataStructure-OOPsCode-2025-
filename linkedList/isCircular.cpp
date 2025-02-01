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
        next = this;
    }
};
void insertNode(Node *&head, int data , Node *&curr)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        curr = head;
        return;
    }
    curr -> next = temp;
    temp -> next = head;
    curr = temp;
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

void print(Node *head)
{
    if (head == NULL) return; 

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head); 

    cout << endl;
}

int main(void)
{

    Node *head = NULL;
    Node *curr = NULL;

    insertNode(head, 6 , curr);
    insertNode(head, 5 , curr);
    insertNode(head, 9 , curr);
 

    print(head);
    curr -> next = NULL;

    if( isCircular(head) == true ) cout << "the list is circular ";
    else cout<< "list is not circular ";

    return 0;
}
