#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	string a;
	string b;
	string c;

	cin >> a >> b;

	int length;

	if (b.length() > a.length())
	{
		string tmp = a;
		a = b;
		b = tmp;
	}

	c =  a;

	length = ((a.length()) - 1);
	int add = 0;
	int result = 0;

	for (int i = b.length()-1; i >= 0; i--)
	{
		result = (a[length] - '0') + (b[i] - '0') + add;


		c[length] = (char)(((result)%10) + '0');

		if (result >= 10)
			add = 1;

		if (result < 10)
			add = 0;

		length--;
	}

	int i = 0;
	if (length>=0 && add == 1)
	{
		for (i = length; i >= 0; i--)
		{
			result = (c[i] - '0') + add;
			c[i] = (char)(((result) % 10) + '0');

			if (result >= 10)
				add = 1;

			if (result < 10)
				add = 0;
		}

	}

	if ((length < 0 && add == 1)|| (result>=10) && (i<0))
	{
		c = (char)(add + '0') + c;
	}

	cout << c;

	return 0;
}
