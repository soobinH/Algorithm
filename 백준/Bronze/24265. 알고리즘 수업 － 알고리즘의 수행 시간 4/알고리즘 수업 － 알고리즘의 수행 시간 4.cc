#include <iostream>
using namespace std;

int main(void)
{
	long long result = 0;
	long long a;
	cin >> a;

	for (int i = 1; i < a; i++)
	{
		result += i;
	}

	cout << result << endl << 2;
}