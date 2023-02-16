#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	if (num > 10)
		return 0;

	for (int i = 0; i < num; i++)
	{
		string input;

		cin >> input;

		for (int i = 0; i < input.length(); i++)
		{
			input[i] = tolower(input[i]);
		}

		cout << input << '\n';
	}

}