#include <iostream>
using namespace std;

int main(void)
{
	int result[10000] = { 0, };

	int input, num;

	cin >> input >> num;

	int num_index = 1;

	for (int i = 1; i <= input; i++)
	{
		if (input % i == 0)
		{
			result[num_index] = i;
			num_index++;
		}
	}

	cout << result[num] << '\n';
	return 0;
}