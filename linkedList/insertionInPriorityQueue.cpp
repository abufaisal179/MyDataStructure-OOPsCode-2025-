// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Node
{
    public:
    char data; int priority;
    Node *next , *front , *rear;

    Node ( char data , int priority )
    {
          this -> data = data;
          this -> priority = priority;
          next = NULL;
          front =  rear = NULL;
    }
};
bool IsEmpty( Node *front , Node *rear )
{
    if( front == NULL && rear ==  NULL)
    {
         return 1;
    }
    return 0;
    // if( IsEmpty(front , rear) == true )
    // {
    //     cout << " can't enqueue more priority elements " << endl;
    //     return;
    // }
}
void insertInPriorityQueue( char data , int priority , Node *&front , Node *&rear )
{
    Node *temp = new Node(data, priority); 
    if( front == NULL )
    {
        front = rear = temp;
        return;
    }
    Node *head = front;
    Node *curr = NULL;
    // managing case where temp -> pri < head -> pri >>
    if( temp -> priority < head -> priority )
    {
        temp -> next = head;
        temp = head;
    }
    while( temp -> priority > head -> priority && head != NULL )
    {
         curr = head;
         head = head -> next;
    }
    if( head == NULL )
    {
        head -> next = temp;
        return;
    }
    curr -> next = temp;
    temp -> next = head;
}
void printAllData(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(void) {

    Node *front = NULL;
    Node *rear = NULL;

    insertInPriorityQueue( 'A' , 1 , front , rear );
    insertInPriorityQueue( 'F' , 3 , front , rear );
    insertInPriorityQueue( 'n' , 2 , front , rear );
    insertInPriorityQueue( 'W' , 4 , front , rear );


    printAllData( front );
  return 0;
}
