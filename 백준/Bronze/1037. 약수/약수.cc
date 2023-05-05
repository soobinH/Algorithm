#include <iostream>
using namespace std;

int main(void)
{
	long input[50] = { 0, };

	int N;
	cin >> N;

	int i;
	long result = 0;
	for (i = 0; i < N; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int k = i; k < N; k++)
		{
			if (input[i] > input[k])
			{
				long temp = input[i];
				input[i] = input[k];
				input[k] = temp;
			}
		}
		
	}

	if (N == 1)
	{
		cout << input[0] * input[0] << endl;
	}

	else
	{
		cout << input[0] * input[N-1] << endl;
	}

	return 0;
}