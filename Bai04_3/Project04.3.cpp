#include <iostream>
using namespace std;
#include "CTime.h"

int main()
{
	cout << "Project 004.3 - 22521474 - BT_OOP_W7" << endl;
	CTime a, b;
	cout << "\nEnter the first time:" << endl;
	a.Input();
	cout << "\nEnter the second time:" << endl;
	b.Input();
	cout << "\nThe first inputted time is:	";
	a.Output();
	cout << ".\n\nThe second inputted time is:	";
	b.Output();
	cout << "." << endl;
	if (a == b)
		cout << "\nThe first inputted time has the same value with the second ones.";
	else if (a != b)
		cout << "\nThe first inputted time doesn't have the same value with the second ones.";
	cout << endl;
	return 1;
}