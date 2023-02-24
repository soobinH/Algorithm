#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count;
	cin >> count;

	for (int i = 1; i <= count; i++)
	{
		for (int j = i; j <=count-1; j++)
		{
			cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}

		for (int m = 1; m < i; m++)
		{
			cout << "*";
		}

		cout << '\n';
	}

	for (int i = 1; i <= count - 1; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}

		for (int k = i; k < count; k++)
		{
			cout << "*";
		}

		for (int m = i; m <count-1; m++)
		{
			cout << "*";
		}

		cout << '\n';
	}

	return 0;
}

