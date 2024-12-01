#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int cnt = 1;
	int layers = 1;

	cin >> n;
	while (n > cnt)
	{
		cnt += 6 * layers;
		layers++;
	}

	cout << layers;

	return 0;

}