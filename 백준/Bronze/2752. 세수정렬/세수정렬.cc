#include <iostream>
using namespace std;

int main(void)
{
	int input[3];
	cin >> input[0] >> input[1] >> input[2];

	for (int i = 0; i < 2; i++)
	{
		for (int k = i; k < 3; k++)
		{
			if (input[i] > input[k])
			{
				int temp = input[i];
				input[i] = input[k];
				input[k] = temp;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << input[i] << " ";
	}

	return 0;
}