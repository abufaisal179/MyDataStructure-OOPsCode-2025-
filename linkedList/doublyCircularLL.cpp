// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev, *next;

    Node(int data)
    {
        this->data = data;
        prev = next = NULL;
    }
};
void insertAtMiddle(int data, Node *&tail, int pos)
{
    Node *temp = new Node(data);
    Node *curr = tail;

    int count = 1;
    while (count <= pos - 1)
    {
        curr = curr -> next;
        count++;
    }
    temp -> next = curr -> next;
    temp -> next -> prev = temp;
    curr -> next = temp;
    temp -> prev = curr;
}
void insertNode(int data, Node *&tail)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        tail->next = temp;
        tail->prev = temp;
        return;
    }
    Node *temp = new Node(data);
    temp->next = tail->next;
    tail->next = temp;
    temp->prev = tail;
    temp->next->prev = temp;

    tail = temp;
}
void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *curr = tail->next;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != tail->next);

    cout << endl;
}
int main(void)
{
    Node *tail = NULL;

    insertNode(4, tail);
    insertNode(6, tail);
    insertNode(98, tail);
    insertAtMiddle( 5 , tail , 2);
    print(tail);

    return 0;

}