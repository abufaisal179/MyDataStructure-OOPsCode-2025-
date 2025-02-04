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
int sumLL(Node *head1, Node *head2)
{

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
    cout << " count 1 : " << count2 << endl;
        return count1 + count2;
}
    void printAllData(Node * &head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void insertAtHead(int data, Node *&head)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    int main(void)
    {

        Node *head1 = new Node(4);
        insertAtHead(7, head1);
        insertAtHead(3, head1);

        Node *head2 = new Node(5);
        insertAtHead(2, head2);
        insertAtHead(1, head1);
        // insertAtHead( 1 , head1 );

        int result = sumLL(head1, head2);

       // cout << "the sum is : " << result;

        return 0;
    }
