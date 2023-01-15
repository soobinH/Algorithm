#include <iostream>
using namespace std;

void print_alarm(int& h, int& m);

int main(void)
{
	int h, m;
	cin >> h >> m;
	print_alarm(h, m);
	cout << h << " " << m << endl;
	return 0;
}

void print_alarm(int &h, int &m)
{
	if (h == 0 && m < 45)
	{
		h = 23;
		m = (60 + m) - 45;
	}
	else if (m<45)
	{
		h = h-1;
		m = (60 + m) - 45;
	}
	else
	{
		m = m - 45;
	}
}