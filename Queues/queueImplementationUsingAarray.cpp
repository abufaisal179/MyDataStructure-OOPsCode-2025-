// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int front, rear;
    int capacity;

    Queue(int size)
    {
        capacity = size;
        arr = new int(size);
        rear = front = -1;
    }

    bool isFull()
    {
        return (rear + 1) % capacity == front;
    }
    bool isEmpty()
    {
        return front == -1;
    }
    void enquuee(int val)
    {
        if (isFull() == true)
        {
            cout << "Queue is full , can't enqueue more element " << endl;
            return;
        }
        else if (isEmpty() == true)
        {
            front = rear = 0;
        }

        arr[rear] = val;
        rear++;
    }
    void dequeue()
    {
        if (isEmpty() == true)
        {
            cout << "can't pop element , because Queue is empty " << endl;
            return;
        }
        for (int i = 0; i < capacity; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    void showFront()
    {
        if (isEmpty() == true)
        {
            cout << "can't show front element , because Queue is empty " << endl;
        }
        else
        {
            cout << "the front element is >> " << front << endl;
        }
    }
    void showRear()
    {
        if (isEmpty() == true)
        {
            cout << "can't show rear element , because Queue is empty " << endl;
        }
        else
        {
            cout << "the rear element is >> " << rear << endl;
        }
    }
    void printQueue()
    {
        int i = front;
        while (i < capacity)
        {
            cout << arr[i] << " ";
            i++;
        }
    }
};
int main(void)
{

    Queue q1(5);

    q1.enquuee(4);
    q1.enquuee(12);
    q1.enquuee(9);
    q1.enquuee(3);
    q1.enquuee(25);

    q1.printQueue();

    return 0;
}
