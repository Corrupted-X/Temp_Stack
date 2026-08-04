/******************************
Author: Patrick Vandergrift
Date: Jan. 20, 2026
Purpose: Templated Stack
******************************/
#include "stack.h"

//*****************************
//DRIVER
//*****************************
int main() 
{
	Stack<int> s;
	int option = 0;
	cout << "Enter 1: Push, 2: Pop, 0: Stop" << endl;
	cin >> option;
	while (option != 0) 
	{
		int value = -99999;
		if (option == 1) 
		{
			cin >> value;
			if (!s.Push(value))
				cout << "stack unchanged" << endl;
		}
		else if (option == 2) 
		{
			if (s.Pop(value))
				cout << value << " popped off the list" << endl;
			else
				cout << "stack unchanged" << endl;
		}
		s.Print();
		cout << "Enter 1: Push, 2: Pop, 0: Stop" << endl;
		cin >> option;
	}

	return 0;
}

