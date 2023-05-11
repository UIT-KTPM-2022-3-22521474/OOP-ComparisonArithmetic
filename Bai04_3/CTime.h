class CTime
{
private:
	int HH;
	int MM;
	int SS;
public:
	void Input();
	bool operator==(const CTime&);
	bool operator!=(const CTime&);
	void Output();
};

void CTime::Input()
{
	cout << "Enter the hour:		";
	cin >> HH;
	cout << "Enter the minute:	";
	cin >> MM;
	cout << "Enter the second:	";
	cin >> SS;
}

bool CTime::operator == (const CTime& t)
{
	if (HH == t.HH && MM == t.MM && SS == t.SS)
		return true;
	return false;
}

bool CTime::operator != (const CTime& t)
{
	if (!(HH == t.HH && MM == t.MM && SS == t.SS))
		return true;
	return false;
}

void CTime::Output()
{
	cout << HH << ":" << MM << ":" << SS;
}