#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;
	cin >> n;

	int zero = 0;
	int fibonacci = 1;
	int lastFibonacci = 1;
	int last = 1;

	if (n == 0)
		cout << 0 << endl;

	else {

		for (int i = 0; i < n-2; i++)
		{
			last = fibonacci;
			fibonacci += lastFibonacci;
			lastFibonacci = last;
		}

		cout << fibonacci << endl;
	}

	return 0;
}