#include <iostream>
using namespace std;
const int MAX = 5;

//*****************************
//CLASS DECLARATION
//*****************************
template<class T>
class Stack {
	T data[MAX];
	int top;
public:
	Stack();
	bool IsEmpty()const;
	bool IsFull()const;
	bool Push(T e);
	bool Pop(T& e);
	void Print()const;
};

//*****************************
//CLASS DEFINITIONS
//*****************************
template<class T>
Stack<T>::Stack() :top(-1) {}

template<class T>
bool Stack<T>::IsEmpty()const
{
	return top == -1;
}

template<class T>
bool Stack<T>::IsFull()const
{
	return top == MAX - 1;
}

template<class T>
bool Stack<T>::Push(T e)
{
	bool success = false;
	if (!IsFull()) {
		//top++; //change top	
		//data[top] = e;//put e on the top stack
		data[++top] = e;
		success = true;
	}
	return success;
}

template<class T>
bool Stack<T>::Pop(T& e)
{
	bool success = false;

	if (!IsEmpty()) {	//check for not empty		
		//e = data[top];  // assign top value to e		
		//top--;			// decrement top		
		e = data[top--];
		success = true;	// set flag to true
	}
	return success;
}

template<class T>
void Stack<T>::Print()const
{
	cout << "___________" << endl;
	for (int i = top; i >= 0; i--)
		cout << i << ": " << data[i] << endl;
	cout << "___________" << endl;
}
