#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	cin >> input;

	if (input.length() > 100)
		return 0;

	int count = 0;

	for (int i = 0; i < input.length(); i++)
	{

		if (input[i] == 'd')
		{
			if (input[i + 1] == 'z' && input[i + 2] == '=')
			{
				count++;
				i = i + 2;
				continue;
			}
				
			else if (input[i + 1] == '-')
			{
				count++;
				i = i + 1;
				continue;
			}

			else
				count++;
		}

		else if (input[i] == 'c')
		{
			if (input[i + 1] == '=')
			{
				count++;
				i = i + 1;
				continue;
			}


			else if (input[i + 1] == '-')
			{
				count++;
				i = i + 1;
				continue;
			}

			else count++;
		}

		else if (input[i] == 's' || input[i] == 'z')
		{
			if (input[i + 1] == '=')
			{
				count++;
				i = i + 1;
				continue;
			}

			else count++;
		}

		else if (input[i] == 'l' || input[i] == 'n')
		{
			if (input[i + 1] == 'j')
			{
				count++;
				i = i + 1;
				continue;
			}

			else count++;
		}

		else
			count++;
	}

	cout << count << endl;

	return 0;
}