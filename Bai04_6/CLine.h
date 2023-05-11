class CLine
{
private:
	float a;
	float b;
	float c;
public:
	void Input();
	bool operator==(const CLine&);
	bool operator!=(const CLine&);
	void Output();
};

void CLine::Input()
{
	cout << "Enter a:	";
	cin >> a;
	cout << "Enter b:	";
	cin >> b;
	cout << "Enter c:	";
	cin >> c;
}

bool CLine::operator==(const CLine& d)
{
	if (a == d.a && b == d.b && c == d.c)
		return true;
	return false;
}

bool CLine::operator!=(const CLine& d)
{
	if (a != d.a)
		return true;
	if (b != d.b)
		return true;
	if (c != d.c)
		return true;
	return false;
}

void CLine::Output()
{
	cout << a << "x + " << b << "y + " << c << " = 0";
}