#include <iostream>
using namespace std;

int main(void)
{
	int num = 0;
	int result = 0;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int input = 0;
		bool check = 1;
		cin >> input;

		if (input == 1)
			continue;
		else
		{
			for (int i = 2; i < input; i++)
			{
				if (input % i == 0)
				{
					check = false;
					break;
				}

				else
					continue;
			}
		}
		if (check == 1)
			result++;
	}

	cout << result << endl;

	return 0;
}