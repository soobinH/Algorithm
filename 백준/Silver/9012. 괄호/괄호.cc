#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(void)
{
	int num;
	cin >> num;



	while(num>0)
	{
		num--;

		string s;
		cin >> s;

		string answer = "YES";

		stack<char>a;


		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '(')
			{
				a.push(s[j]);
			}

			else if (!a.empty() && s[j] == ')' && a.top() == '(')
			{
				a.pop();
			}

			else
			{
				answer = "NO";
				break;
			}
		}

		if (!a.empty())
			answer = "NO";

		std::cout << answer << endl;
	}
	
	return 0;

}