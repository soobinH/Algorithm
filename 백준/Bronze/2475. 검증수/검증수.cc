#include <iostream>
using namespace std;

int main(void)
{
	int result = 0;
	int a;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		result += a * a;
	}

	cout << result % 10;

	return 0;

}