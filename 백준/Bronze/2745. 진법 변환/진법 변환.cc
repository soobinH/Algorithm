#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void)
{
	string input;
	int B;
	cin >> input >> B;

	long result = 0;

	for (int i = input.length() - 1; i >= 0; i--)
	{
		int num = input.length()-1-i;
		long r = pow(B, num);
		
		if (input[i] >= '0' && input[i] <= '9')
		{
			result += (input[i] - '0') * r;
		}

		else
		{
			result += (input[i] - 'A' + 10)*r;
		}
	}

	cout << result << endl;
}