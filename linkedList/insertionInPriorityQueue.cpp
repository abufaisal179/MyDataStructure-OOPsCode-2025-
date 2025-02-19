// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Node
{
public:
    char data;
    int priority;
    Node *next, *front, *rear;

    Node(char data, int priority)
    {
        this->data = data;
        this->priority = priority;
        next = NULL;
        front = rear = NULL;
    }
};
void sortOrderArrangement(char data, int priority, Node *&front, Node *&rear)
{
    Node *temp = new Node(data, priority);
    if (front == NULL)
    {
        front = rear = temp;
        return;
    }
    Node *head = front;
    Node *curr = front;
    // for first >>
    if (temp->data <= curr->data)
    {
        temp->next = curr;
        curr = temp;
        front = curr;
        return;
    }
    // for middle >>
    while (curr->next != NULL)
    {
        if (temp->data <= curr->next->data && temp->data >= curr->data)
        {
            temp->next = curr->next;
            curr->next = temp;
            return;
        }
        curr = curr->next;
    }
    // for last >>
    if (temp->data >= curr->data)
    {
        curr->next = temp;
        curr = temp;
        rear = temp;
    }

    return;
}
void insertInPriorityQueue(char data, int priority, Node *&front, Node *&rear)
{
    Node *temp = new Node(data, priority);
    if (front == NULL)
    {
        front = rear = temp;
        return;
    }
    Node *head = front;
    Node *curr = front;
    // for first >>
    if (temp->priority <= curr->priority)
    {
        temp->next = curr;
        curr = temp;
        front = curr;
        return;
    }
    // for middle >>
    while (curr->next != NULL)
    {
        if (temp->priority <= curr->next->priority && temp->priority >= curr->priority)
        {
            temp->next = curr->next;
            curr->next = temp;
            return;
        }
        curr = curr->next;
    }
    // for last >>
    if (temp->priority >= curr->priority)
    {
        curr->next = temp;
        curr = temp;
        rear = temp;
    }

    return;
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

    Node *front = NULL;
    Node *rear = NULL;

    insertInPriorityQueue('N', 2, front, rear);
    insertInPriorityQueue('A', 1, front, rear);
    insertInPriorityQueue('W', 4, front, rear);
    insertInPriorityQueue('F', 3, front, rear);

    printAllData(front);
    
    insertInPriorityQueue('b', 2, front, rear);
    insertInPriorityQueue('a', 1, front, rear);
    insertInPriorityQueue('d', 4, front, rear);
    insertInPriorityQueue('c', 3, front, rear);

    printAllData(front);

    return 0;
}
