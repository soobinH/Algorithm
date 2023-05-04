#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	cin >> input;

	int count = 0;

	for (int i = 0; i < input.length(); i++)
	{
		cout << input[i];
		if (i == 9 + (count * 10))
		{
			cout << endl;
			count++;
		}
	}
	return 0;
	
}