#include <iostream>
using namespace std;

int main(void)
{
	int num;
	cin >> num;

	int number[1000] = { 0, };

	for (int i = 0; i < num; i++)
	{
		cin >> number[i];
	}

	for (int i = num; i > 1; i--)
	{
		for (int j = 0; j + 1 < i; j++)
		{
			if (number[j] > number[j + 1])
			{
				int temp;
				temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << number[i] << endl;
	}

	return 0;
}