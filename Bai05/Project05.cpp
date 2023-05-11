#include <iostream>
#include <cmath>
using namespace std;
#include "CComplexNumber.h"

int main()
{
	cout << "Project 005 - 22521474 - BT_OOP_W7" << endl;
	CComplexNumber a, b;
	cout << "\nEnter the first complex number:" << endl;
	a.Input();
	cout << "\nEnter the second complex number: " << endl;
	b.Input();
	cout << "\nThe first inputted complex number is:		";
	a.Output();
	cout << ".\n\nThe second inputted complex number is:		";
	b.Output();
	cout << "." << endl;
	if (a >= b)
	{
		cout << "\nThe first inputted complex number has the bigger or equal value with the second ones.";
		if (a == b)
			cout << "\nTwo inputted complex number have the same value.";
		if (a > b)
		{
			cout << "\nTwo inputted complex number doesn't have the same value.";
			cout << "\nThe first inputted complex number has the bigger value from the second ones.";
		}
	}
	else if (a <= b)
	{
		cout << "\nThe first inputted complex number has the smaller or equal value with the second ones.";
		if (a == b)
			cout << "\nTwo inputted complex number have the same value.";
		if (a < b)
		{
			cout << "\nTwo inputted complex number doesn't have the same value.";
			cout << "\nThe first inputted complex number has the smaller value from the second ones.";
		}
	}
	cout << endl;
	return 1;
}