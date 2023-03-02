#include <iostream>
using namespace std;

int main(void)
{
	int result[100000] = { 0, };

	while (1)
	{
		int input;
		cin >> input;

		if (input == -1)
			break;

		int check = 0;
		int result_index = 0;

		for (int i = 1; i < input; i++)
		{
			if (input % i == 0)
			{
				check += i;
				result[result_index] = i;
				result_index++;
			}
		}

		if (check == input)
		{
			cout << input << " = ";
			for (int i = 0; i < result_index-1; i++)
			{
				cout << result[i] << " + ";
			}
			cout << result[(result_index - 1)] << '\n';
		}

		else
			cout << input << " is NOT perfect.\n";
	}
	
	

	return 0;
}