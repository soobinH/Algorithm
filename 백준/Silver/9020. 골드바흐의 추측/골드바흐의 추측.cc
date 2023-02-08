#include <iostream>
using namespace std;

#define MAX 100000

int num[MAX + 1]{ 0, };

int main(void)
{
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input = 0;
		cin >> input;

		for (int i = 2; i <= input; i++)
		{
			num[i] = i;
		}

		for (int i = 2; i * i <= input; i++)
		{
			if (num[i] == 0)
				continue;

			for (int j = i * i; j <= input; j += i)
			{
				num[j] = 0;
			}
		}

		input = input / 2;
		int result = 0;

		for (int i = input; i >= 0; i--)
		{
			if (num[i] != 0)
			{
				if (num[i] && num[2 * input - i])
				{
					cout << num[i] << ' ' << num[2 * input - i] << '\n';
					break;
				}
				else continue;
				
			}
		}
	}

	return 0;
}