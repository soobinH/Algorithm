#include <iostream>
using namespace std;

int main(void)
{
	int cost;
	cin >> cost;

	int cal = 1000 - cost;
	int result = 0;

	result += cal / 500;
	cal = cal % 500;

	result += cal / 100;
	cal = cal % 100;

	result += cal / 50;
	cal = cal % 50;

	result += cal / 10;
	cal = cal % 10;

	result += cal / 5;
	cal = cal % 5;

	result += cal / 1;
	cal = cal % 1;



	cout << result << '\n';
	return 0;
}