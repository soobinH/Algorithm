#include <iostream>
using namespace std;

int main(void)
{
	char board[8][8] = { 0, };

	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> board[i][j];

			if (i % 2 == 0 || i == 0)
			{
				if (j % 2 == 0 || j == 0)
				{
					if (board[i][j] == 'F')
					{
						count++;
					}
				}
			}

			else if (i % 2 != 0)
			{
				if (j % 2 != 0)
				{
					if (board[i][j] == 'F')
					{
						count++;
					}
				}
			}
		}
	}

	cout << count << endl;
	return 0;
}