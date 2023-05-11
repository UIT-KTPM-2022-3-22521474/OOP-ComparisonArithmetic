#include <iostream>
using namespace std;
#include "CMixedNumber.h"

int main()
{
	cout << "Project 002 - 22521474 - BT_OOP_W7" << endl;
	CMixedNumber a, b;
	cout << "\nEnter the first mixed number:" << endl;
	a.Input();
	cout << "\nEnter the second mixed number:" << endl;
	b.Input();
	cout << "\nThe first inputted mixed number is:		";
	a.Output();
	cout << ".\n\nThe second inputted mixed number is:		";
	b.Output();
	cout << "." << endl;
	if (a >= b)
	{
		cout << "\nThe first inputted mixed number has the bigger or equal value with the second ones.";
		if (a == b)
			cout << "\nTwo inputted mixed number have the same value.";
		if (a > b)
		{
			cout << "\nTwo inputted mixed number doesn't have the same value.";
			cout << "\nThe first inputted mixed number has the bigger value from the second ones.";
		}
	}
	else if (a <= b)
	{
		cout << "\nThe first inputted mixed number has the smaller or equal value with the second ones.";
		if (a == b)
			cout << "\nTwo inputted mixed number have the same value.";
		if (a < b)
		{
			cout << "\nTwo inputted mixed number doesn't have the same value.";
			cout << "\nThe first inputted mixed number has the smaller value from the second ones.";
		}
	}
	cout << endl;
}