#include <iostream>
using namespace std;

int main(void)
{
	long long input[100][3];
	long long money[100];

	int first, second;

	cin >> first;

	for (int i = 0; i < first; i++)
	{
		int kill, death, assist;
		long long result = 0;
		cin >> second;

		for (int k = 0; k < second; k++)
		{
			cin >> input[k][0] >> input[k][1] >> input[k][2];
		}

		cin >> kill >> death >> assist;

		for (int j = 0; j < second; j++)
		{
			money[j] = input[j][0] * kill - input[j][1] * death + input[j][2] * assist;
			if (money[j] < 0)
				money[j] = 0;

			result += money[j];
		}

		cout << result << endl;
	}

	return 0;
}
