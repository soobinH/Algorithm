#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		cout << s[0] << s[s.length() - 1] << '\n';
	}

	return 0;
}