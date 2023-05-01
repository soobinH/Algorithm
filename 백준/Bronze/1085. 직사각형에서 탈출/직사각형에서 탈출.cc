#include <iostream>
using namespace std;

int main(void)
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int a, b, c, d;

	a = x - 0;
	b = y - 0;
	c = w - x;
	d = h - y;

	if (a > c)
		a = c;

	if (b > d)
		b = d;

	if (a <= b)
		cout << a << endl;

	if (b < a)
		cout << b << endl;

	return 0;
}