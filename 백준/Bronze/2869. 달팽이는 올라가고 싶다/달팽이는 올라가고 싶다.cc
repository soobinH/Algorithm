#include <iostream>
using namespace std;

int main(void)
{
	int day = 0;
	int night = 0;
	int length = 0;

	cin >> day >> night >> length;


	int count = (length - day) / (day - night) + 1;

	if ((length - day) % (day - night) != 0)
	{
		count++;
	}

	cout << count << endl;

	return 0;
}