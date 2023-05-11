class CDate
{
private:
	int DD;
	int MM;
	int YYYY;
public:
	void Input();
	bool operator==(const CDate&);
	bool operator!=(const CDate&);	
	void Output();
};

void CDate::Input()
{
	cout << "Enter the date:		";
	cin >> DD;
	cout << "Enter the month:	";
	cin >> MM;
	cout << "Enter the year:		";
	cin >> YYYY;
}

bool CDate::operator==(const CDate& d)
{
	if (YYYY == d.YYYY && MM == d.MM && YYYY == d.YYYY)
		return true;
	return false;
}

bool CDate::operator!=(const CDate& d)
{
	if (!(YYYY == d.YYYY && MM == d.MM && YYYY == d.YYYY))
		return true;
	return false;
}

void CDate::Output()
{
	cout << DD << "/" << MM << "/" << YYYY;
}