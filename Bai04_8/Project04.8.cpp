#include <iostream>
#include <cmath>
using namespace std;
#include "C3DPoint.h"
#include "CSphere.h"

int main()
{
	cout << "Project 004.8 - 22521474 - BT_OOP_W7" << endl;
	CSphere a, b;
	cout << "\nEnter the first sphere:" << endl;
	a.Input();
	cout << "\nEnter the second sphere:" << endl;
	b.Input();
	cout << "\nThe first inputted sphere is:	";
	a.Output();
	cout << ".\n\nThe second inputted sphere is:	";
	b.Output();
	cout << "." << endl;
	if (a == b)
		cout << "\nThe first inputted sphere has the same centerpoint-radius with the second ones.";
	else if (a != b)
		cout << "\nThe first inputted triangle doesn't have the same centerpoint-radius with the second ones.";
	cout << endl;
	return 1;
}