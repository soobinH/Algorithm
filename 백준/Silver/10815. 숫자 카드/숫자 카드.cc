#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	map<int, int>s_card;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int input;
		cin >> input;

		s_card.insert({ input, 1 });
	}

	int num2;
	cin >> num2;

	for (int i = 0; i < num2; i++)
	{
		int input;
		cin >> input;

		if (s_card.find(input) != s_card.end())
		{
			cout << s_card.find(input)->second << " ";
		}

		else
			cout << "0 ";
	}

	return 0;
}