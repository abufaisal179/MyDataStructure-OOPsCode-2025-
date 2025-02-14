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
Node *reverseNode(Node *&head)
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
    return prev;
}
Node *middleLL(Node *&head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
void insertAtTail(int data, Node *&tail, Node *&head)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
        return;
    }
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
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
    Node *first = NULL;
    Node *firstTail = first;

    insertAtTail(5, firstTail, first);
    insertAtTail(2, firstTail, first);
    insertAtTail(4, firstTail, first);
    insertAtTail(5, firstTail, first);

    Node *middle = middleLL( first);

    cout << middle->data << endl;
    return 0;
}