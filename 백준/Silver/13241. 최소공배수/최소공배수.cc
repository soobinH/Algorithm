#include <iostream>
using namespace std;

long long int calculate(long long int a, long long int b);

int main(void)
{
	long long int a, b = 0;

	long long int result = 0;

	cin >> a >> b;

	if (a < b)
	{
		result = a * b / calculate(b, a);
	}

	else result = a * b / calculate(a, b);

	cout << result << endl;
	return 0;
}

long long int calculate(long long  int a, long long int b)
{
	if (a % b == 0)
		return b;

	return calculate(b, a % b);
}