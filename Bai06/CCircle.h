class CCircle
{
private:
	C2DPoint I;
	float R;
public:
	void Input();
	bool operator==(const CCircle&);
	bool operator!=(const CCircle&);
	bool operator>(const CCircle&);
	bool operator<(const CCircle&);
	bool operator>=(const CCircle&);
	bool operator<=(const CCircle&);
	float Area();
	void Output();
};
void CCircle::Input()
{
	cout << "Enter the centerpoint's coordinate:	" << endl;
	I.Input();
	cout << "Enter the radius:	";
	cin >> R;
}

bool CCircle::operator==(const CCircle& c)
{
	CCircle temp = c;
	if (Area() == temp.Area())
		return true;
	return false;
}

bool CCircle::operator!=(const CCircle& c)
{
	CCircle temp = c;
	if (Area() != temp.Area())
		return true;
	return false;
}

bool CCircle::operator>(const CCircle& c)
{
	CCircle temp = c;
	if (Area() > temp.Area())
		return true;
	return false;
}

bool CCircle::operator<(const CCircle& c)
{
	CCircle temp = c;
	if (Area() < temp.Area())
		return true;
	return false;
}

bool CCircle::operator>=(const CCircle& c)
{
	CCircle temp = c;
	if (Area() >= temp.Area())
		return true;
	return false;
}

bool CCircle::operator<=(const CCircle& c)
{
	CCircle temp = c;
	if (Area() <= temp.Area())
		return true;
	return false;
}

float CCircle::Area()
{
	return (float)(3.14 * R * R);
}

void CCircle::Output()
{
	cout << "\nThe circle's centerpoint coordinate is:		";
	I.Output();
	cout << "\nThe circle's radius is:				" << R;
}