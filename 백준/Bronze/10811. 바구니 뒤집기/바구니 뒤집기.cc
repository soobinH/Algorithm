#include <iostream>
using namespace std;

int baskets[100] = { -1, };

int main(void)
{
	int basketN, m;
	cin >> basketN >> m;

	for (int i = 1; i <= basketN; i++)
	{
		baskets[i] = i;
	}

	
	int basket1 = 0, basket2 = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> basket1 >> basket2;

		if (basket1 == basket2)
			continue;

		else
		{
			int sum = basket1 + basket2;

			int count = basket1;
			for (int k = 0; k < ((basket2 - (basket1 - 1))/ 2); k++)
			{
				int temp = baskets[count];
				baskets[count] = baskets[sum - count];
				baskets[sum - count] = temp;
				count++;
			}
		}

	}

	for (int i = 1; i <= basketN; i++)
	{
		cout << baskets[i] << " ";
	}

	cout << endl;

	return 0;
}