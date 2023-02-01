#include <iostream>
using namespace std;

int main(void)
{
	int fix =0;
	int sell = 0;
	int var = 0;

	cin >> fix >> var >> sell;

	if (sell <= var)
	{
		cout << -1;
	}

	else
		cout << (fix / (sell - var) + 1);

	return 0;
}