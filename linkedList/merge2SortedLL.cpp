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
    Node *curr1 = first;
    Node *next1 = first->next;
    Node *curr2 = second;
    Node *next2 = second->next;

    if (second == NULL)
    {
        return first;
    }

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
        {            curr1 = next1;
            next1 = next1->next;
            if (next1->next == NULL)
            {
                curr1->next = curr2;
                break;
            }
        }
    }
    return first;
}
void insertAtHead(int data, Node *&head)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
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
    Node *first = NULL;
    Node *second = NULL;
    Node *result;

    // LL 1
    insertAtHead(2, first);
    insertAtHead(5, first);
    insertAtHead(7, first);

    printAllData(first);

    // LL 2
    insertAtHead(3, second);
    insertAtHead(4, second);
    insertAtHead(9, second);

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