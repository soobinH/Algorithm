#include <iostream>
using namespace std;

int main(void)
{
	int input[3];
	while (1)
	{
		cin >> input[0] >> input[1] >> input[2];

		if (input[0] + input[1] + input[2] == 0)
			return 0;

		int max = 0;
		int maxN = 0;
		for (int i = 0; i < 2; i++)
		{
			for (int k = i; k < 3; k++)
			{
				if (input[i] > input[k])
				{
					int tmp = input[i];
					input[i] = input[k];
					input[k] = tmp;
				}
			}
		}

		int a = input[2] * input[2];
		int b = input[1] * input[1];
		int c = input[0] * input[0];

		if (a == b + c)
			cout << "right\n";

		else
			cout << "wrong\n";

		
	}

	return 0;
}