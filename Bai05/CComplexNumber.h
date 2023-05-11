class CComplexNumber
{
private:
	float Real;
	float Imaginary;
public:
	void Input();
	bool operator==(const CComplexNumber&);
	bool operator!=(const CComplexNumber&);
	bool operator>(const CComplexNumber&);
	bool operator<(const CComplexNumber&);
	bool operator>=(const CComplexNumber&);
	bool operator<=(const CComplexNumber&);
	float Module();
	void Output();
};

bool CComplexNumber::operator==(const CComplexNumber& cn)
{
	if (Real == cn.Real && Imaginary == cn.Imaginary)
		return true;
	return false;
}

bool CComplexNumber::operator!=(const CComplexNumber& cn)
{
	if (!(Real == cn.Real && Imaginary == cn.Imaginary))
		return true;
	return false;
}

bool CComplexNumber::operator>(const CComplexNumber& cn)
{
	CComplexNumber temp, temp1;
	temp = *this;
	temp1 = cn;
	float a = temp.Module();
	float b = temp1.Module();
	if (a > b)
		return true;
	return false;
}

bool CComplexNumber::operator<(const CComplexNumber& cn)
{
	CComplexNumber temp, temp1;
	temp = *this;
	temp1 = cn;
	float a = temp.Module();
	float b = temp1.Module();
	if (a < b)
		return true;
	return false;
}
bool CComplexNumber::operator>=(const CComplexNumber& cn)
{
	CComplexNumber temp, temp1;
	temp = *this;
	temp1 = cn;
	float a = temp.Module();
	float b = temp1.Module();
	if (a >= b)
		return true;
	return false;
}

bool CComplexNumber::operator<=(const CComplexNumber& cn)
{
	CComplexNumber temp, temp1;
	temp = *this;
	temp1 = cn;
	float a = temp.Module();
	float b = temp1.Module();
	if (a <= b)
		return true;
	return false;
}

float CComplexNumber::Module()
{
	return sqrt(Real * Real + Imaginary * Imaginary);
}

void CComplexNumber::Input()
{
	cout << "Enter the real part:		";
	cin >> Real;
	cout << "Enter the imaginary part:	";
	cin >> Imaginary;
}

void CComplexNumber::Output()
{
	cout << Real;
	if (Imaginary > 0)
		cout << " + " << Imaginary;
	else
		cout << " - " << Imaginary;
	cout << "i";
}