// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Node 
{
    public:
    int data;     
    Node *next;

    Node ( int data )
    {
        this-> data = data;
        next = NULL;
    }
    
};
void insertAtHead( int data , Node *head  )
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void printAllData( Node *&head )
{
    Node *temp = head;
    while(  temp != NULL )
    {
        cout << temp->data << " ";
        temp = temp -> next;
    }
}

int main(void) {
 
  Node *node = new Node(4);
  

  insertAtHead( 3 , node ); 
  insertAtHead( 5 , node ); 
  insertAtHead( 6 , node ); 
  insertAtHead( 89 , node ); 

  printAllData( node );

  return 0;
}
