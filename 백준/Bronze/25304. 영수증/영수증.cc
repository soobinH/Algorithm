#include <iostream>
using namespace std;

int main(void)
{
	double x, a;
	int n, b;
	double total = 0;
	cin >> x;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		total += a * b;
	}
	if (total == x)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}