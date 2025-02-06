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
bool palindromeOrNot(Node *&head)
{
    Node *temp = head;
    int rev = 0, remainder;
    Node *middle = middleLL(head);
    Node *head2 = reverseNode(middle);

    while (head != NULL)
    {
        if (head->data != head2->data)
        {
            return false;
        }

        head2 = head2->next;
        head = head->next;
    }
    head = temp;
    return true;
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

    printAllData(first);
    Node *slow = middleLL(first);

    cout << slow -> data << endl;

    // int result = palindromeOrNot(first);

    // (result == 1) ? cout << "palindrome list" : cout << "not palindrome ";

    return 0;
}