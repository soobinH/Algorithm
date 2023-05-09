#include <iostream>
using namespace std;

int main(void)
{
	int input[5];

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
		if (input[i] < 40)
			input[i] = 40;

		sum += input[i];
	}

	cout << sum / 5 << endl;

	return 0;
}