#include <iostream>
using namespace std;

int count(int a)
{
	int coun = 1;
	int again = 0;
	if (a >= 10)
	{
		again = (10 * (a % 10)) + (((a / 10) + (a % 10)) % 10);
		while (1)
		{
			again = (10 * (again % 10)) + (((again / 10) + (again % 10)) % 10);
			coun++;
			if (again == a)
				break;
		}
	}
	else if(a>=0)
	{
		again = 2*a;
		while (1)
		{
			if (again == a)
				break;
			again = 2 * again;
			coun++;
			
			if (again > 10)
				break;
			
		}

		while (1)
		{
			again = (10 * (again % 10)) + (((again / 10) + (again % 10)) % 10);
			coun++;
			if (again == a)
				break;
			
		}
	}
	return coun;
}

int main(void)
{
	int a;
	cin >> a;
	cout << count(a) << endl;
	return 0;
}