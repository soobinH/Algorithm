#include <iostream>
using namespace std;

int main(void)
{
	int playTime;
	cin >> playTime;

	for (int i = 0; i < playTime; i++)
	{
		int change;
		cin >> change;


		int coins[4];
		coins[0] = change / 25;
		change = change % 25;

		coins[1] = change / 10;
		change = change % 10;

		coins[2] = change / 5;
		change = change % 5;

		coins[3] = change / 1;
		
		for (int i = 0; i < 4; i++)
		{
			cout << coins[i] << " ";
		}

		cout << endl;
	}

	return 0;
}