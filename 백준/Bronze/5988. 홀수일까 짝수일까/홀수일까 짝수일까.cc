#include <iostream>
using namespace std;

int main(void)
{
	int num;
	cin >> num;

	if (num < 1 || num>100)
		return 0;

	for (int i = 0; i < num; i++)
	{
		string input;
		cin >> input;

		if (input[input.length() - 1] % 2 == 0)
			cout << "even\n";

		else
			cout << "odd\n";
	}

	return 0;
}