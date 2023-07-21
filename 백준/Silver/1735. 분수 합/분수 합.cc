#include <iostream>
using namespace std;

int calculate(int a, int b);

int main(void)
{
	int a, b, c, d = 0;

	cin >> a >> b;

	cin >> c >> d;

	int child, parent = 0;

	parent = b * d;
	child = (a * d) + (c * b);



	cout << child / calculate(child, parent) << " " << parent / calculate(child, parent) << endl;

	return 0;
}

int calculate(int a, int b)
{
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	if (a % b == 0)
		return b;

	return calculate(b, a % b);
}