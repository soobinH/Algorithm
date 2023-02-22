#include <iostream>
using namespace std;

int main(void)
{
	int ball[101]{ 0, };

	int basket, n;
	cin >> basket >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b, ballnum;
		cin >> a >> b >> ballnum;

		for (int k = a; k <= b; k++)
		{
			ball[k] = ballnum;
		}
	}

	for (int i = 1; i <= basket; i++)
	{
		cout << ball[i] << ' ';
	}

	return 0;

	
}