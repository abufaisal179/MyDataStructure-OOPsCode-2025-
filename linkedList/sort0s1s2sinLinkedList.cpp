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
void Sort(Node *&head)
{
    Node *curr = head;
    int count0s = 0, count1s = 0, count2s = 0;

    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            count0s++;
        }
        else if (curr->data == 1)
        {
            count1s++;
        }
        else
        {
            count2s++;
        }
        curr = curr->next;
    }
    curr = head;

    int count = 0;
    while (curr != NULL)
    {
        if (count < count0s)
        {
            curr->data = 0;
        }

        else if (count < count1s + count0s)
        {
            curr->data = 1;
        }
        else
        {
            curr->data = 2;
        }
        count++;
        curr = curr->next;
    }
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

    Node *head = new Node(1);

    insertAtHead(1, head);
    insertAtHead(0, head);
    insertAtHead(0, head); 
    insertAtHead(1, head);
    insertAtHead(2, head);
    insertAtHead(0, head);
    insertAtHead(1, head);
    insertAtHead(2, head);

    printAllData(head);
    Sort(head);
    printAllData(head);
    return 0;
}
