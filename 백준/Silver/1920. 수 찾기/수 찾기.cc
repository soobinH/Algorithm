#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> checkList;
	int tryNum = 0;
	cin >> tryNum;
	for (int i = 0; i < tryNum; i++)
	{
		int input;
		cin >> input;
		checkList.insert({ input, i });
	}

	int inputNum = 0;
	cin >> inputNum;
	for (int i = 0; i < inputNum; i++)
	{
		int input;
		cin >> input;

		if (checkList.find(input) != checkList.end())
		{
			cout << "1\n";
		}

		else
			cout << "0\n";

	}

	return 0;
}
