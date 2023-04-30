#include <iostream>
using namespace std;

int baskets[101] = { -1, };

int main(void)
{
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		baskets[i] = i;
	}

	int begin, end, mid;
	for (int i = 0; i < M; i++)
	{
		cin >> begin >> end >> mid;

		if (begin == mid)
			continue;

		else
		{
			int test[100] = { -1, };

			for (int j = begin; j < mid; j++)
			{
				test[j] = baskets[j];
			}


			int index = begin;
			for (int k = mid; k <= end; k++)
			{
				baskets[index] = baskets[k];
				index++;
			}

			for (int m = begin; m < mid; m++)
			{
				baskets[index] = test[m];
				index++;
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << baskets[i] << " ";
	}

	cout << endl;

	return 0;
}