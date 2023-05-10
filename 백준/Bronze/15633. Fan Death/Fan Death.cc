#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int result = 1;

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
			result += i;
	}

	result = result * 5 - 24;
	cout << result << endl;

	return 0;
}