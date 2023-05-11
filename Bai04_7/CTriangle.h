class CTriangle
{
private:
	C2DPoint A;
	C2DPoint B;
	C2DPoint C;
public:
	void Input();
	bool operator==(const CTriangle&);
	bool operator!=(const CTriangle&);
	void Output();
};

void CTriangle::Input()
{
	cout << "Enter A's coordinate:";
	A.Input();
	cout << "Enter B's coordinate:";
	B.Input();
	cout << "Enter C's coordinate:";
	C.Input();
}

bool CTriangle::operator==(const CTriangle& x)
{
	if (A == x.A && B == x.B && C == x.C)
		return true;
	return false;
}

bool CTriangle::operator!=(const CTriangle& x)
{
	if (!(A == x.A && B == x.B && C == x.C))
		return true;
	return false;
}

void CTriangle::Output()
{
	A.Output();
	cout << "; ";
	B.Output();
	cout << "; ";
	C.Output();
}