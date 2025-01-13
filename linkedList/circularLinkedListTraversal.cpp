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
void insertNode(int data, Node *&tail, int ele)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;

        while ( curr -> data != ele )
        {
            curr = curr -> next;
        }
        Node *temp = new Node ( data );
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}
void printNode ( Node *&tail ) 
{
    Node *temp = tail;
    while( )
}
int main(void)
{

    Node *tail = new Node(4);

    insertNode( 9 , tail , 5);
    return 0;
}
