#include <iostream>
using namespace std;

int main(void)
{
	int ball[101] = { 0, };

	int a, b;

	cin >> a >> b;

	for (int i = 1; i <= a; i++)
	{
		ball[i] = i;
	}

	for (int i = 0; i < b; i++)
	{
		int m, n;
		int tmp = 0;
		cin >> m >> n;

		tmp = ball[m];
		ball[m] = ball[n];
		ball[n] = tmp;
	}

	for (int i = 1; i <= a; i++)
	{
		cout << ball[i] << ' ';
	}

	return 0;

}