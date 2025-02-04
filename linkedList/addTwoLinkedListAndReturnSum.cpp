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
        Node *temp = new Node(data);
        head = temp;
        return;
    }
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
Node *sumLL(Node *head1, Node *head2)
{
    Node *sumNode = NULL;
    int count1 = 0, count2 = 0;
    while (head1 != NULL || head2 != NULL)
    {
        if (head1 != NULL)
        {
            count1 = count1 * 10 + head1->data;
            head1 = head1->next;
        }
        if (head2 != NULL)
        {
            count2 = count2 * 10 + head2->data;
            head2 = head2->next;
        }
    }
    int sum = count1 + count2, remainder;
    while (sum > 0)
    {
        remainder = sum % 10;
        insertAtHead(remainder, sumNode);
        sum /= 10;
    }

    return sumNode;
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
void insertAtTail(int data, Node *&tail, Node *&head)
{

    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = tail;
        return;
    }
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

int main(void)
{

    Node *tail1 = NULL;
    Node *head1 = tail1;
    insertAtTail(7, tail1, head1);
    insertAtTail(3, tail1, head1);
    insertAtTail(8, tail1, head1);

    Node *tail2 = NULL;
    Node *head2 = tail2;
    insertAtTail(2, tail2, head2);
    insertAtTail(1, tail2, head2);
    insertAtTail(3, tail2, head2);

    Node *newHead = sumLL(head1, head2);
    printAllData(newHead);

    return 0;
}