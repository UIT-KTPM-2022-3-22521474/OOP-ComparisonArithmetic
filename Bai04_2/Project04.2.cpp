#include <iostream>
using namespace std;
#include "CDate.h"

int main()
{
	cout << "Project 004.2 - 22521474 - BT_OOP_W7" << endl;
	CDate a, b;
	cout << "\nEnter the first date:" << endl;
	a.Input();
	cout << "\nEnter the second date:" << endl;
	b.Input();
	cout << "\nThe first inputted date is:	";
	a.Output();
	cout << ".\n\nThe second inputted date is:	";
	b.Output();
	cout << "." << endl;
	if (a == b)
		cout << "\nThe first inputted date has the same value with the second ones.";
	else if (a != b)
		cout << "\nThe first inputted date doesn't have the same value with the second ones.";
	cout << endl;
	return 1;
}