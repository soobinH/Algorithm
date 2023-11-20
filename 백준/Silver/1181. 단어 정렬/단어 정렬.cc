#include <iostream>
#include <algorithm>
using namespace std;

int cmp(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}

	else {
		return a.length() < b.length();
	}
}

string input[20000];

int main(void)
{
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	sort(input, input + n, cmp);

	for (int i = 0; i < n; i++)
	{
		if (input[i] == input[i - 1])
			continue;

		cout << input[i] << "\n";
	}

	return 0;
}