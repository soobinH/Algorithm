#include <iostream>
using namespace std;

string CheckDays(int, int);

int main(void)
{
	int month, date;
	cin >> month >> date;
	cout << CheckDays(month, date);
	return 0;
}

string CheckDays(int month, int date)
{
	int MonthOfDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string DaysOfName[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	int nowDays = 0;
	for (int i = 0; i < month; i++)
	{
		nowDays += MonthOfDays[i];
	}

	nowDays += date;
	return DaysOfName[nowDays % 7];
}