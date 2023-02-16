#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;

	cin >> input;

	int result = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == ',')
		{
			result++;
		}
	}

	cout << result + 1 << '\n';
	return 0;
}