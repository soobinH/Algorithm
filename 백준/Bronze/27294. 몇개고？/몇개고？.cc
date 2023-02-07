#include <iostream>
using namespace std;

int main(void)
{
	int t = 0;
	bool s = 0;

	cin >> t >> s;

	if (t > 16 || t < 12 || s == true)
		cout << 280;

	else
		cout << 320;

	return 0;
}