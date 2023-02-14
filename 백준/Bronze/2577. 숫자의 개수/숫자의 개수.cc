#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int a, b, c;

	cin >> a >> b >> c;

	string result;
	result = to_string(a * b * c);

	int print[10] = { 0, };


	for (int i = 0; i <= result.length(); i++)
	{
		int result1 = result[i] - '0';
		print[result1]++;
	}

	for (int i = 0; i <= 9; i++)
	{
		cout << print[i] << "\n";
	}

	return 0;

}