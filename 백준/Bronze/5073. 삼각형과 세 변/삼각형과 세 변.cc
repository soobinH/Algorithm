#include <iostream>
using namespace std;

int main(void)
{
	int input[3];
	while (1)
	{
		cin >> input[0] >> input[1] >> input[2];

		if (input[0] + input[1] + input[2] == 0)
			break;

		for (int i = 0; i < 2; i++)
		{
			for (int k = i + 1; k < 3; k++)
			{
				if (input[i] > input[k])
				{
					int tmp = input[i];
					input[i] = input[k];
					input[k] = tmp;
				}
			}
		}

		int a = input[0];
		int b = input[1];
		int c = input[2];
		int check = 0;

		if (a + b > c)
		{
			if (a == b)
				check++;

			if (b == c)
				check++;

			if (c == a)
				check++;

			if(check == 1)
				cout << "Isosceles\n";

			if(check == 0)
				cout << "Scalene\n";

			if(check == 3)
				cout << "Equilateral\n";
			
		}


		else
		{
			cout << "Invalid\n";
		}
	}

	return 0;
}