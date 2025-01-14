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
void isFull()
{
	cout << "the stack can never full , because it's non-static data struture " << endl;
}
bool isEmpty(Node *&top)
{
	return top == NULL;
}
void pop(Node *&top)
{
	if (isEmpty(top) == true)
	{
		cout << "can't pop element to the stack , because it's empty() " << endl;
	}
	else
	{
		Node *temp = top;
		top = top->next;
		delete temp;
	}
}
void push(int data, Node *&top)
{
	if (top == NULL)
	{
		Node *temp = new Node(data);
		top = temp;
		return;
	}
	else
	{
		Node *newNode = new Node(data);
		newNode->next = top;
		top = newNode;
	}
}
void top(Node *top)
{
	if (isEmpty(top) == true)
	{
		cout << "the stack is empty , can't provide top element " << endl;
		return;
	}
	cout << "the top element is " << top->data << endl;
}
void print(Node *top)
{
	if (isEmpty(top) == true)
	{
		cout << "the stack is empty , can't print more element " << endl;
	}
	else
	{
		while (top != NULL)
		{
			cout << top->data << " ";
			top = top->next;
		}
	}
	cout << endl;
}
int main()
{
	Node *top = NULL;

	push(4, top);
	push(21, top);
	push(9, top);
	push(5, top);

	print(top);

	pop(top);

	print(top);
	return 0;
}