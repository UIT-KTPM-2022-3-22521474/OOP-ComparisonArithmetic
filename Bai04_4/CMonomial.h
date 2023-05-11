class CMonomial
{
private:
	float Coefficient;
	int Exponent;
public:
	void Input();
	bool operator==(const CMonomial&);
	bool operator!=(const CMonomial&);
	void Output();
};

void CMonomial::Input()
{
	cout << "Enter the monomial's coefficient:	";
	cin >> Coefficient;
	cout << "Enter the monomial's exponent:		";
	cin >> Exponent;
}

bool CMonomial::operator==(const CMonomial& x)
{
	if (Exponent == x.Exponent && Coefficient == x.Coefficient)
		return true;
	return false;
}

bool CMonomial::operator!=(const CMonomial& x)
{
	if (!(Exponent == x.Exponent && Coefficient == x.Coefficient))
		return 1;
	return 0;
}

void CMonomial::Output()
{
	cout << Coefficient << "x^" << Exponent;
}