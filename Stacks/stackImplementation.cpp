// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Stack
{
public:
    int top;
    int arr[100];
    int max_size;

public:
    Stack(int size)
    {
        max_size = size;
        top = -1;
    }

    // operations in stack >>

    bool isFull()
    {
        return top == max_size;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void pop()
    {
        if (isEmpty() == true)
        {
            cout << "you can't pop more element , because Stack is empty" << endl;
            return;
        }

        top--;
    }
    void push(int data)
    {
        if (isFull() == true)
        {
            cout << "the Stack is Full , you can't push more element " << endl;
            return;
        }
        arr[top] == data;
        top++;
    }
    void displayTop()
    {
        if (isEmpty() == true)
        {
            cout << " stack is empty , can't display top element" << endl;
        }

        cout << arr[top] << endl;
    }
    void showAll()
    {
        if(isEmpty() == true )
        return;

        int i = 0;
        while (i < top)
        {
            cout << arr[i] << " ";
            i++;
        }
    }
};
int main(void)
{

    Stack s1(3);
    s1.push(4);
    s1.push(12);
    s1.push(45);

    s1.showAll();

    return 0;
}
