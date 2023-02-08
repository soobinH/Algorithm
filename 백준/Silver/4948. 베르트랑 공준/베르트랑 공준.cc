#include <iostream>
using namespace std;

#define MAX 1000000

int num[MAX + 1]{ 0, };

int main(void)
{
	while (1)
	{
		int input = 0;
		int result = 0;
		cin >> input;

		result = 0;

		if (input == 0)
			break;

		for (int i = 2; i <= 2*input; i++)
		{
			num[i] = i;
		}

		for (int i = 2; i * i <= 2*input; i++)
		{
			if (num[i] == 0)
				continue;


			// i의 배수를 소거
			for (int j = i * i; j <= 2*input; j += i)
			{
				num[j] = 0;
			}
		}

		for (int i = input+1; i <= 2 * input; i++)
		{
			if (num[i] != 0)
				result++;
		}

		cout << result << '\n';
	}

	return 0;
}