class C3DPoint
{
private:
	float x;
	float y;
	float z;
public:
	void Input();
	bool operator==(C3DPoint);
	bool operator!=(C3DPoint);
	void Output();
};

void C3DPoint::Input()
{
	cout << "Enter x:	";
	cin >> x;
	cout << "Enter y:	";
	cin >> y;
	cout << "Enter z:	";
	cin >> z;
}

bool C3DPoint::operator==(C3DPoint p)
{
	if (x == p.x && y == p.y && z == p.z)
		return true;
	return false;
}

bool C3DPoint::operator!=(C3DPoint p)
{
	if (!(x == p.x && y == p.y && z == p.z))
		return true;
	return false;
}

void C3DPoint::Output()
{
	cout << "(" << x << ", " << y << ", " << z << ")";
}