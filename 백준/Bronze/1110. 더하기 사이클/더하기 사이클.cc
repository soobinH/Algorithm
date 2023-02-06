#include <iostream>
using namespace std;

int main(void)
{
	int input = 0;
	
	cin >> input;


	int result = input;
	int count = 0;

	while (1)
	{
		int num = ((result / 10) + (result % 10));

		if (num >= 10)
			num = (((result / 10) + (result % 10))) % 10;

		result = (10 * (result % 10)) + num;
		
		count++;

		if (result == input)
		{
			cout << count << endl;
			break;
		}
	}

	return 0;
}