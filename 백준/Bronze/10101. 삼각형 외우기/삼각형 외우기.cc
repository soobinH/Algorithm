
#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	int check = 0;
	if (a + b + c == 180)
	{
		if (a == b)
			check++;
		if (a == c)
			check++;
		if (b == c)
			check++;

		if (check == 3)
			cout << "Equilateral\n";
		if (check == 1)
			cout << "Isosceles\n";
		if (check == 0)
			cout << "Scalene\n";
	}

	else
		cout << "Error\n";

	

	return 0;
}
