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
bool palindromeOrNot(Node *&head)
{
    Node *temp = head;
    int rev = 0, remainder;
    while (temp != NULL)
    {
        rev = rev * 10 + temp->data;
        temp = temp->next;
    }
    int prev = rev;
    int rev2 = 0;
    while (rev > 0)
    {
        remainder = rev % 10;
        rev2 = rev2 * 10 + remainder;
        rev /= 10;
    }

    return prev == rev2;
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

    // LL 1
    insertAtTail(2, firstTail, first);
    insertAtTail(2, firstTail, first);

    insertAtTail(5, firstTail, first);
    insertAtTail(2, firstTail, first);
    insertAtTail(2, firstTail, first);

    int result = palindromeOrNot(first);

    (result == 1) ? cout << "palindrome list" : cout << "not palindrome ";

    return 0;
}