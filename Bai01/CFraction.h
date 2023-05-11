class CFraction
{
private:
	int Numerator;
	int Denominator;
public:
	void Input();
	bool operator==(const CFraction&);
	bool operator!=(const CFraction&);
	bool operator>(const CFraction&);
	bool operator<(const CFraction&);
	bool operator>=(const CFraction&);
	bool operator<=(const CFraction&);
	void Output();
};

bool CFraction::operator==(const CFraction& f)
{
	if ((float)Numerator / Denominator == (float)f.Numerator / f.Denominator)
		return true;
	return false;

}

bool CFraction::operator!=(const CFraction& f)
{
	if ((float)Numerator / Denominator != (float)f.Numerator / f.Denominator)
		return true;
	return false;
}

bool CFraction::operator>(const CFraction& f)
{
	if ((float)Numerator / Denominator > (float)f.Numerator / f.Denominator)
		return true;
	return false;
}

bool CFraction::operator<(const CFraction& f)
{
	if ((float)Numerator / Denominator < (float)f.Numerator / f.Denominator)
		return true;
	return false;
}

bool CFraction::operator>=(const CFraction& f)
{
	if ((float)Numerator / Denominator >= (float)f.Numerator / f.Denominator)
		return true;
	return false;
}

bool CFraction::operator<=(const CFraction& f)
{
	if ((float)Numerator / Denominator <= (float)f.Numerator / f.Denominator)
		return true;
	return false;
}

void CFraction::Input()
{
	cout << "Enter the numerator:		";
	cin >> Numerator;
	cout << "Enter the denominator:		";
	cin >> Denominator;
}

void CFraction::Output()
{
	cout << Numerator << "/" << Denominator;
}