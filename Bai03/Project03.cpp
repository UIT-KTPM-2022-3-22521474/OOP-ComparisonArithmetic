#include <iostream>
#include <cmath>
using namespace std;
#include "C2DPoint.h"

int main()
{
	cout << "Project 003 - 22521474 - BT_OOP_W7" << endl;
	C2DPoint a, b;
	cout << "\nEnter the first point:" << endl;
	a.Input();
	cout << "Enter the second point:" << endl;
	b.Input();
	cout << "\nThe first inputted point is:		";
	a.Output();
	cout << ".\n\nThe second inputted point is:	";
	b.Output();
	cout << "." << endl;
	if (a >= b)
	{
		cout << "\nThe first inputted point has the bigger or equal coordinate with the second ones.";
		if (a == b)
			cout << "\nTwo inputted point have the same coordinate.";
		if (a > b)
		{
			cout << "\nTwo inputted point doesn't have the same coordinate.";
			cout << "\nThe first inputted point has the bigger coordinate from the second ones.";
		}
	}
	else if (a <= b)
	{
		cout << "\nThe first inputted point has the smaller or equal coordinate with the second ones.";
		if (a == b)
			cout << "\nTwo inputted point have the same coordinate.";
		if (a < b)
		{
			cout << "\nTwo inputted point doesn't have the same coordinate.";
			cout << "\nThe first inputted point has the smaller coordinate from the second ones.";
		}
	}
	cout << endl;
	return 1;
}