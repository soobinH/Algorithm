#include <iostream>
using namespace std;

int main(void)
{
	int input;
	cin >> input;

	int a, b = 0;

	a = input / 5;

	while (1)
	{
		if (a < 0)
		{
			cout << -1 << endl;
			return 0;
		}

		if ((input - (5 * a)) % 3 == 0)
		{
			b = (input - (5 * a)) / 3;
			break;
		}
		a--;
	}

	cout << a + b;
	return 0;
}