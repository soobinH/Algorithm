#include <iostream>
using namespace std;


int main(void)
{
	int a, c;
	char b;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		cout << a + c << endl;
	}

	return 0;
}