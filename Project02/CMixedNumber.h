class CMixedNumber
{
private:
	int IntPart;
	int Numerator;
	int Denominator;
public:
	void Input();
	bool operator>(const CMixedNumber&);
	bool operator>=(const CMixedNumber&);
	bool operator<(const CMixedNumber&);
	bool operator<=(const CMixedNumber&);
	bool operator!=(const CMixedNumber&);
	bool operator==(const CMixedNumber&);
	void Output();
};

void CMixedNumber::Input()
{
	cout << "Enter the integer-part:				";
	cin >> IntPart;
	cout << "Enter the mixed number-part's numerator:	";
	cin >> Numerator;
	cout << "Enter the mixed number-part's denominator:	";
	cin >> Denominator;
}

bool CMixedNumber::operator>(const CMixedNumber& mn)
{
	CMixedNumber ft1;
	ft1.Numerator = IntPart * Denominator + Numerator;
	ft1.Denominator = Denominator;
	CMixedNumber ft2;
	ft2.Numerator = mn.IntPart * mn.Denominator + mn.Numerator;
	ft2.Denominator = mn.Denominator;
	float r1 = (float)ft1.Numerator / ft1.Denominator;
	float r2 = (float)ft2.Numerator / ft2.Denominator;
	if (r1 > r2)
		return true;
	return false;
}

bool CMixedNumber::operator>=(const CMixedNumber& mn)
{
	CMixedNumber ft1;
	ft1.Numerator = IntPart * Denominator + Numerator;
	ft1.Denominator = Denominator;
	CMixedNumber ft2;
	ft2.Numerator = mn.IntPart * mn.Denominator + mn.Numerator;
	ft2.Denominator = mn.Denominator;
	float r1 = (float)ft1.Numerator / ft1.Denominator;
	float r2 = (float)ft2.Numerator / ft2.Denominator;
	if (r1 >= r2)
		return true;
	return false;
}

bool CMixedNumber::operator<(const CMixedNumber& mn)
{
	CMixedNumber ft1;
	ft1.Numerator = IntPart * Denominator + Numerator;
	ft1.Denominator = Denominator;
	CMixedNumber ft2;
	ft2.Numerator = mn.IntPart * mn.Denominator + mn.Numerator;
	ft2.Denominator = mn.Denominator;
	float r1 = (float)ft1.Numerator / ft1.Denominator;
	float r2 = (float)ft2.Numerator / ft2.Denominator;
	if (r1 < r2)
		return true;
	return false;
}

bool CMixedNumber::operator<=(const CMixedNumber& mn)
{
	CMixedNumber ft1;
	ft1.Numerator = IntPart * Denominator + Numerator;
	ft1.Denominator = Denominator;
	CMixedNumber ft2;
	ft2.Numerator = mn.IntPart * mn.Denominator + mn.Numerator;
	ft2.Denominator = mn.Denominator;
	float r1 = (float)ft1.Numerator / ft1.Denominator;
	float r2 = (float)ft2.Numerator / ft2.Denominator;
	if (r1 <= r2)
		return true;
	return false;
}

bool CMixedNumber::operator==(const CMixedNumber& mn)
{
	CMixedNumber ft1;
	ft1.Numerator = IntPart * Denominator + Numerator;
	ft1.Denominator = Denominator;
	CMixedNumber ft2;
	ft2.Numerator = mn.IntPart * mn.Denominator + mn.Numerator;
	ft2.Denominator = mn.Denominator;
	float r1 = (float)ft1.Numerator / ft1.Denominator;
	float r2 = (float)ft2.Numerator / ft2.Denominator;
	if (r1 == r2)
		return true;
	return false;
}

bool CMixedNumber::operator!=(const CMixedNumber& mn)
{
	CMixedNumber ft1;
	ft1.Numerator = IntPart * Denominator + Numerator;
	ft1.Denominator = Denominator;
	CMixedNumber ft2;
	ft2.Numerator = mn.IntPart * mn.Denominator + mn.Numerator;
	ft2.Denominator = mn.Denominator;
	float r1 = (float)ft1.Numerator / ft1.Denominator;
	float r2 = (float)ft2.Numerator / ft2.Denominator;
	if (r1 != r2)
		return true;
	return false;
}

void CMixedNumber::Output()
{
	if (Numerator < 0 && Denominator < 0)
	{
		Numerator = -Numerator;
		Denominator = -Denominator;
		cout << IntPart << " (" << Numerator << "/" << Denominator << ")";
	}
	else if (Numerator > 0 && Denominator < 0)
	{
		Numerator = -Numerator;
		Denominator = -Denominator;
		cout << -IntPart << " (" << Numerator << "/" << Denominator << ")";
	}
	else if (Numerator < 0 && Denominator > 0)
	{
		Numerator = -Numerator;
		Denominator = Denominator;
		cout << -IntPart << " (" << Numerator << "/" << Denominator << ")";
	}
	else if (Numerator > 0 && Denominator > 0)
	{
		cout << IntPart << " (" << Numerator << "/" << Denominator << ")";
	}
	else if (Numerator == 0)
	{
		cout << 0;
	}
}