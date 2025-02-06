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
Node *merge(Node *&first, Node *&second)
{
    if (first == NULL)
    {
        return second;
    }
    else if (second == NULL)
    {
        return first;
    }
    if( first -> next == NULL )
    {
        first -> next = second;
        return first;
    }
    Node *curr1 = first;
    Node *next1 = first->next;
    Node *curr2 = second;
    Node *next2 = second->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if (curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
            next2 = next2->next;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;
            if( next1 ==  NULL )
            {
                curr1 -> next = curr2;
                return first ;
            }
        }
    }
   
    return first;
}
void insertAtTail(int data, Node *&tail , Node *&head)
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
    Node *second = NULL;
    Node *secondTail = second;
    Node *result;

    // LL 1
    insertAtTail(2, firstTail , first);
    insertAtTail(5, firstTail , first);
    insertAtTail(7, firstTail , first);

    printAllData(first);

    // LL 2
    insertAtTail(3, secondTail , second);
    insertAtTail(4, secondTail , second);
    insertAtTail(9, secondTail , second);

    printAllData(second);

    if (first->data <= second->data)
    {
        result = merge(first, second);
    }
    else
    {
        result = merge(second, first);
    }

    printAllData(result);

    return 0;
}