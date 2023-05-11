#include <iostream>
using namespace std;
#include "CLine.h"

int main()
{
	cout << "Project 004.6 - 22521474 - BT_OOP_W7" << endl;
	CLine a, b;
	cout << "\nLine equation's type: ax + by + c = 0." << endl;
	cout << "\nEnter the first line's equation:" << endl;
	a.Input();
	cout << "\nEnter the second line's equation:" << endl;
	b.Input();
	cout << "\nThe first inputted line's equation is:	";
	a.Output();
	cout << ".\n\nThe second inputted line's equation is:	";
	b.Output();
	cout << "." << endl;
	if (a == b)
		cout << "\nThe first inputted line has the same equation with the second ones.";
	else if (a != b)
		cout << "\nThe first inputted line doesn't have the same equation with the second ones.";
	cout << endl;
	return 1;
}