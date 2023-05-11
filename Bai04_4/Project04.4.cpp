#include <iostream>
using namespace std;
#include "CMonomial.h"

int main()
{
	cout << "Project 004.4 - 22521474 - BT_OOP_W7" << endl;
	CMonomial a, b;
	cout << "\nEnter the first monomial:" << endl;
	a.Input();
	cout << "\nEnter the second monomial:" << endl;
	b.Input();
	cout << "\nThe first inputted monomial is:		";
	a.Output();
	cout << ".\n\nThe second inputted monomial is:	";
	b.Output();
	cout << "." << endl;
	if (a == b)
		cout << "\nThe first inputted monomial has the same coefficient-exponent with the second ones.";
	else if (a != b)
		cout << "\nThe first inputted monomial doesn't have the same coefficient-exponent with the second ones.";
	cout << endl;
	return 1;
}