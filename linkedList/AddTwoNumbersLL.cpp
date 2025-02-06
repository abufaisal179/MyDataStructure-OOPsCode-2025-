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
void *reverseNode(Node *&head)
{
    Node *prev = NULL;
    Node *next1 = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        next1 = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next1;
    }
    head = prev;
}
void insertAtHead(int data, Node *&head)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
Node *addTwoNum(Node *&head1, Node *&head2)
{
    if (head1->next == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    reverseNode(head1);
    reverseNode(head2);

    Node *temp1 = head1;
    Node *temp2 = head2;

    Node *newList = NULL;
    int carry = 0, sum = 0;

    while (temp1 != NULL || temp2 != NULL)
    {
        sum = carry + temp1->data + temp2->data;
        int digit = sum % 10;
        insertAtHead( digit+carry , newList);
        carry = sum / 10;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    reverseNode(newList);
    return newList;
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

    Node *head1 = NULL;
    insertAtHead(4, head1);
    insertAtHead(5, head1);
    insertAtHead(2, head1);

    Node *head2 = NULL;
    insertAtHead(4, head2);
    insertAtHead(9, head2);
    insertAtHead(0, head2);

    Node *newList = addTwoNum(head1, head2);

    printAllData(head1);
    printAllData(head2);
    printAllData(newList);

    return 0;
}
