#include <iostream>
using namespace std;

int main(void)
{
	int a = 0;
	int b = 0;

	int sum = 0;
	
	cin >> a >> b;

	int min = 10000;

	for (int i = a; i <= b; i++)
	{
		bool check = 1;

		if (i == 1)
			continue;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				check = false;
				break;
			}
		}

		if (check == 1)
		{
			sum += i;

			if (i <= min)
				min = i;
		}
	}

	if (sum == 0)
		cout << -1 << endl;

	else
		cout << sum << endl << min << endl;

	return 0;
}