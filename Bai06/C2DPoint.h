class C2DPoint
{
private: 
	float x;
	float y;
public:
	bool operator==(C2DPoint);
	bool operator!=(C2DPoint);
	void Input();
	void Output();
};

bool C2DPoint::operator==(C2DPoint p)
{
	if (x == p.x && y == p.y)
		return true;
	return false;
}

bool C2DPoint::operator!=(C2DPoint p)
{
	if (!(x == p.x && y == p.y))
		return true;
	return false;
}

void C2DPoint::Input()
{
	cout << "Enter x:		";
	cin >> x;
	cout << "Enter y:		";
	cin >> y;
}

void C2DPoint::Output()
{
	cout << "(" << x << ", " << y << ")";
}