#include<iostream>
#include <string>
using namespace std;

int main(void)
{
	string sentence;
	cin >> sentence;

	for (char i = 'a'; i <= 'z'; i++)
	{
		bool check = false;
		for (int j = 0; j < sentence.size(); j++)
		{
			if (sentence[j] == i)
			{
				cout << j << " ";
				check = true;
				break;
			}

			else
			{
				check = false;
				continue;
			}
			
		}
		if (check == false)
			cout << -1 << " ";
	}
	
	return 0;
}