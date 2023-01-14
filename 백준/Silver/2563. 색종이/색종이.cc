#include <iostream>
using namespace std;

int main(void)
{
	int paper[100][100] = { 0, };
	int a = 0;
	int locateA, locateB = 0;

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> locateA >> locateB;
		for (int i = locateA; i < locateA + 10; i++)
		{
			for (int j = locateB; j < locateB + 10; j++)
			{
				paper[i][j] = 1;
			}
		}
	}

	int result = 0;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			result += paper[i][j];
		}
	}

	cout << result << endl;

	return 0;

}