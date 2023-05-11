class CSphere
{
private:
	C3DPoint I;
	float R;
public:
	void Input();
	bool operator==(const CSphere&);
	bool operator!=(const CSphere&);
	void Output();
};

void CSphere::Input()
{
	cout << "Enter the centerpoint's coordinate:";
	I.Input();
	cout << "Enter the radius:	";
	cin >> R;
}

bool CSphere::operator==(const CSphere& c)
{
	if (R == c.R)
		return true;
	return false;
}

bool CSphere::operator!=(const CSphere& c)
{
	if (R != c.R)
		return true;
	return false;
}

void CSphere::Output()
{
	cout << "\nThe centerpoint's coordinate is:	";
	I.Output();
	cout << "\nThe radius is:					" << R;
}