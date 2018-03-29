#include<iostream>
#include<stdlib.h>
using namespace std;

class POINT
{
public:
	void set();
	void pick(int*, int*);
private:
	int x;
	int y;
};

void POINT::set()
{
	cout << "please enter X and Y" << endl;
	cin >> x >> y;
}

void POINT::pick(int *a, int *b)
{
	*a = x, *b = y;
}

int main()
{
	POINT p1, p2;
	p1.set();
	p2.set();
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x, y;
	int *xa = &x1, *xb = &x2, *ya = &y1, *yb = &y2;
	p1.pick(xa, ya);
	p2.pick(xb, yb);
	x = x1 - x2;
	y = y1 - y2;
	cout << abs(x)*abs(y);

	return 0;
}