#include <iostream>
#include <string>
using namespace std;

int main(void)
{

	while(1)
	{
		string input;
		cin >> input;

		if (input == "0")
			break;

		int check = input.length() - 1;
		bool result = true;
		for (int k = 0; k < input.length() / 2; k++)
		{
			if (input[k] != input[check - k])
			{
				result = false;
			}
		}

		if (result)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	
	return 0;
}