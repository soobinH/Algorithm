#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;

	cin >> input;

	int size = input.size() - 1;

	for (int i = 0; i < input.size() / 2; ++i)
	{
		if (input[i] != input[size - i])
		{
			cout << 0 << '\n';
			return 0;
		}
	}

	cout << 1 << '\n';
	return 0;
}