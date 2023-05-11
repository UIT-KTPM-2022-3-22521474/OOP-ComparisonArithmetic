#include <iostream>
using namespace std;
#include "C2DPoint.h"
#include "CTriangle.h"

int main()
{
	cout << "Project 004.7 - 22521474 - BT_OOP_W7" << endl;
	CTriangle a, b;
	cout << "\nEnter the first triangle's points:" << endl;
	a.Input();
	cout << "\nEnter the second triangle's points:" << endl;
	b.Input();
	cout << "\nThe first inputted triangle's points is:	";
	a.Output();
	cout << ".\n\nThe second inputted triangle's points is:	";
	b.Output();
	cout << "." << endl;
	if (a == b)
		cout << "\nThe first inputted triangle has the same points with the second ones.";
	else if (a != b)
		cout << "\nThe first inputted triangle doesn't have the same points with the second ones.";
	cout << endl;
	return 1;
}