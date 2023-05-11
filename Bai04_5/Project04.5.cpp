#include <iostream>
using namespace std;
#include "C3DPoint.h"

int main()
{
	cout << "Project 004.5 - 22521474 - BT_OOP_W7" << endl;
	C3DPoint a, b;
	cout << "\nEnter the first point's coordinate:" << endl;
	a.Input();
	cout << "\nEnter the second point's coordinate:" << endl;
	b.Input();
	cout << "\nThe first inputted point's coordinate is:	";
	a.Output();
	cout << ".\n\nThe second inputted point's coordinate is:	";
	b.Output();
	cout << "." << endl;
	if (a == b)
		cout << "\nThe first inputted point has the same coordinate with the second ones.";
	else if (a != b)
		cout << "\nThe first inputted point doesn't have the same coordinate with the second ones.";
	cout << endl;
	return 1;
}