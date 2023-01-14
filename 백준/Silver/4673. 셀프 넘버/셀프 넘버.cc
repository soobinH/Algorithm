#include <iostream>
using namespace std;

int d(int number)
{
	int sum = number;
	while (number != 0)
	{
		sum += (number % 10);
		number = number / 10;
	}
	return sum;
}

int main(void)
{
	int check[10001] = { 0, };

	for (int i = 1; i < 10001; i++)
	{
		int n = d(i);
		if (n < 10001)
		{
			check[n] = 1;
		}
	}

	for (int i = 1; i < 10001; i++)
	{
		if (check[i] == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}