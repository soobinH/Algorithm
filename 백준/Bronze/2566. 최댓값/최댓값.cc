#include <iostream>
using namespace std;

int main(void)
{
	int array[9][9] = { 0, };
	int max = 0;
	int maxA;
	int maxB;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> array[i][j];
			if (max <= array[i][j])
			{
				max = array[i][j];
				maxA = i + 1;
				maxB = j + 1;
			}
		}
	}

	cout << max << endl;
	cout << maxA << " " << maxB << endl;

	return 0;


}