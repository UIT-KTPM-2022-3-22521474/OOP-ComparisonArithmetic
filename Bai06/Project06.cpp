#include <iostream>
#include <cmath>
using namespace std;
#include "C2DPoint.h"
#include "CCircle.h"

int main()
{
	cout << "Project 006 - 22521474 - BT_OOP_W7" << endl;
	CCircle a, b;
	cout << "\nEnter the first circle:" << endl;
	a.Input();
	cout << "\nEnter the second circle:" << endl;
	b.Input();
	cout << "\nThe first inputted circle is:		";
	a.Output();
	cout << ".\n\nThe second inputted circle is:	";
	b.Output();
	cout << "." << endl;
	if (a >= b)
	{
		cout << "\nThe first inputted circle has the bigger or equal centerpoint's coordinate-radius with the second ones.";
		if (a == b)
			cout << "\nTwo inputted circle have the same centerpoint's coordinate-radius.";
		if (a > b)
		{
			cout << "\nTwo inputted circle doesn't have the same centerpoint's coordinate-radius.";
			cout << "\nThe first inputted circle has the bigger centerpoint's coordinate-radius from the second ones.";
		}
	}
	else if (a <= b)
	{
		cout << "\nThe first inputted circle has the smaller or equal centerpoint's coordinate-radius with the second ones.";
		if (a == b)
			cout << "\nTwo inputted circle have the same centerpoint's coordinate-radius.";
		if (a < b)
		{
			cout << "\nTwo inputted circle doesn't have the same centerpoint's coordinate-radius.";
			cout << "\nThe first inputted circle has the smaller centerpoint's coordinate-radius from the second ones.";
		}
	}
	cout << endl;
	return 1;
}