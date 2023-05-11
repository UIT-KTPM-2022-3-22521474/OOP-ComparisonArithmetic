class C2DPoint
{
private: 
	float x;
	float y;
public:
	void Input();
	float OriDist();
	bool operator==(C2DPoint);
	bool operator!=(C2DPoint);
	bool operator>(C2DPoint);
	bool operator<(C2DPoint);
	bool operator>=(C2DPoint);
	bool operator<=(C2DPoint);
	void Output();
};

bool C2DPoint::operator==(C2DPoint p)
{
	if (OriDist() == p.OriDist())
		return 1;
	return 0;
}

bool C2DPoint::operator!=(C2DPoint p)
{
	if (!(OriDist() == p.OriDist()))
		return 1;
	return 0;
}

bool C2DPoint::operator>(C2DPoint p)
{
	if (OriDist() > p.OriDist())
		return 1;
	return 0;
}

bool C2DPoint::operator<(C2DPoint p)
{
	if (OriDist() < p.OriDist())
		return 1;
	return 0;
}

bool C2DPoint::operator>=(C2DPoint p)
{
	if (OriDist() >= p.OriDist())
		return 1;
	return 0;
}

bool C2DPoint::operator<=(C2DPoint p)
{
	if (OriDist() <= p.OriDist())
		return 1;
	return 0;
}

float C2DPoint::OriDist()
{
	return sqrt(x * x + y * y);
}

void C2DPoint::Input()
{
	cout << "Enter x:	";
	cin >> x;
	cout << "Enter y:	";
	cin >> y;
}

void C2DPoint::Output()
{
	cout << "(" << x << ", " << y << ")" << endl;
}