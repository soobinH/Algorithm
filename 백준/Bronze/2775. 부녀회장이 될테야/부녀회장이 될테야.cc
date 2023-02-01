#include <iostream>
using namespace std;

int main(void)
{
	int caseN = 0;
	cin >> caseN;

	int apartment[15][14] = { 0, };

	for (int k = 0; k < 14; k++)
	{
		apartment[0][k] = (k + 1);
	}

	for (int i = 1; i < 15; i++)
	{
		for (int n = 0; n < 14; n++)
		{
			for (int k = 0; k <= n; k++)
			{
				apartment[i][n] += apartment[i - 1][k];
			}
		}
	}

	int k = 0;
	int n = 0;

	for (int i = 0; i < caseN; i++)
	{
		cin >> k >> n;
		cout << apartment[k][n - 1] << endl;
	}

	return 0;
}