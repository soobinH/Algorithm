#include <iostream>
using namespace std;

int main(void)
{
	long long a, b, c;

	cin >> a >> b >> c;

	if (a < 1 || b < 1 || c < 1)
		return 0;

	cout << a + b + c;

	return 0;
}