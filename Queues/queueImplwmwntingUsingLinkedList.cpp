// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Queue
{
public:
  int data;
  Queue *next;
  Queue(int data)
  {
    next = NULL;
    this->data = data;
  }
};
bool isEmpty(Queue *head)
{
  return head == NULL;
}
void enqueue(int data, Queue *&head, Queue *&tail)
{
  if (head == NULL)
  {
    Queue *temp = new Queue(data);
    tail = head = temp;
    return;
  }
  Queue *temp = new Queue(data);
  head->next = temp;
  temp = head;
}
void dequeue(Queue *&head, Queue *&tail)
{
   if (isEmpty(head)) {
        cout << "Queue is empty! Cannot dequeue.\n";
        return;
    }
  Queue *temp;
  temp = tail;
  tail = tail->next;
  temp->next = NULL;
  free(temp);
}
int sizeOfQueue(Queue *head)
{
  int length = 0;
  while (head != NULL)
  {
    head = head->next;
    length++;
  }

  return length;
}
void print(Queue *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}

int main(void)
{

  Queue *head = NULL;
  Queue *tail = NULL;

  enqueue(4, head, tail);
  enqueue(23, head, tail);
  enqueue(8, head, tail);
  enqueue(9, head, tail);

  print( head );

  return 0;
}
