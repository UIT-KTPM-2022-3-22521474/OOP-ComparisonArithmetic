#include <iostream>
using namespace std;
#include "CFraction.h"

int main()
{
	cout << "Project 001 - 22521474 - BT_OOP_W7" << endl;
	CFraction a, b;
	cout << "\nEnter the first fraction:" << endl;
	a.Input();
	cout << "Enter the second fraction:" << endl;
	b.Input();
	cout << "\nThe first inputted fraction is:		";
	a.Output();
	cout << ".\n\nThe second inputted fraction is:	";
	b.Output();
	cout << "." << endl;
	if (a >= b)
	{
		cout << "\nThe first inputted fraction has the bigger or equal value with the second ones.";
		if (a == b)
			cout << "\nTwo inputted fraction have the same value.";
		if (a > b)
		{
			cout << "\nTwo inputted fraction doesn't have the same value.";
			cout << "\nThe first inputted fraction has the bigger value from the second ones.";
		}			
	}
	else if (a <= b)
	{
		cout << "\nThe first inputted fraction has the smaller or equal value with the second ones.";
		if (a == b)
			cout << "\nTwo inputted fraction have the same value.";
		if (a < b)
		{
			cout << "\nTwo inputted fraction doesn't have the same value.";
			cout << "\nThe first inputted fraction has the smaller value from the second ones.";
		}			
	}
	cout << endl;
	return 1;
}