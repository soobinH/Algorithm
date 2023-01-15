#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, max = 0;
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << 10000 + a*1000 << endl;

	else if (a == b || b == c || a == c)
	{
		if (a == b)
			cout << 1000 + a * 100 << endl;
		else if (b == c)
			cout << 1000 + b * 100 << endl;
		else
			cout << 1000 + c * 100 << endl;
	}
	else
	{
		if (a > b && a > c)
			max = a;
		else if (b > a && b > c)
			max = b;
		else
			max = c;

		cout << max * 100 << endl;
	}
	return 0;
}