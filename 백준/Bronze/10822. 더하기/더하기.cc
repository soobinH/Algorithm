#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	getline(cin, input);

	string num;
	int sum = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] != ',')
		{
			num.push_back(input[i]);
		}

		else
		{
			sum += stoi(num);
			num.clear();
		}
	}

	cout << sum + stoi(num) << '\n';

	return 0;
}