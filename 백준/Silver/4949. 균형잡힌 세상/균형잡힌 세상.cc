#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(void)
{
	while (1)
	{
		string str;
		getline(cin, str);

		if (str == ".")
			return 0;

		bool answer = 1;

		stack<char>s;

		for (int j = 0; j < str.length(); j++)
		{
			char input = str[j];

			if (input == '(' || input == '[')
			{
				s.push(input);
			}

			else if (input == ')')
			{
				if (!s.empty() && s.top() == '(')
					s.pop();

				else
				{
					answer = false;
					break;
				}
			}


			else if (input == ']')
			{
				if (!s.empty() && s.top() == '[')
					s.pop();

				else
				{
					answer = false;
					break;
				}
			}
		}


		if (!s.empty())
			answer = false;

		if (answer)
			cout << "yes\n";

		else
			cout << "no\n";
	}

	return 0;
}