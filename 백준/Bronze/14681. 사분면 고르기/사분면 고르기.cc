#include <iostream>
using namespace std;

int quadrant(int x, int y);

int main(void)
{
	int x, y;
	cin >> x >> y;
	cout << quadrant(x, y) << endl;
	return 0;
}

int quadrant(int x, int y)
{
	if (x > 0 && y > 0)
		return 1;
	else if (x < 0 && y>0)
		return 2;
	else if (x < 0 && y < 0)
		return 3;
	else
		return 4;
}