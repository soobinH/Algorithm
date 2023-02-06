#include <iostream>
using namespace std;

int main(void)
{
	int input = 0;
	cin >> input;

	int n = input;

	for (int i = 2; i <= input; i++)
	{
		if (input % i != 0)
		{
			continue;
		}

		else if (n%i == 0)
		{
			cout << i << endl;

			if (n / i == 1)
				break;

			n = n / i;

			i = 1;
			continue;
		}
	}

	return 0;
}