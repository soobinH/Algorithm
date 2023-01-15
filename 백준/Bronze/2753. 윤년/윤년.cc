#include <iostream>
using namespace std;

bool year_find(int y);

int main(void)
{
	int year;
	cin >> year;
	cout << year_find(year) << endl;
	return 0;

}

bool year_find(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		return 1;
	else
		return 0;
}