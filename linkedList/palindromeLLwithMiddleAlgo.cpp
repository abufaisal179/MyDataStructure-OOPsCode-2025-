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
void reverseNode( Node *&head )
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
void middleLL(Node *&head)
{
    Node *slow = head;
    Node *fast = head -> next;
    
    while( fast != NULL && fast -> next != NULL )
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
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
    insertAtTail(7, firstTail, first);


    // reverseNode( first );
    middleLL( first ); 
    printAllData(first);
    // int result = palindromeOrNot(first);

    // (result == 1) ? cout << "palindrome list" : cout << "not palindrome ";

    return 0;
}