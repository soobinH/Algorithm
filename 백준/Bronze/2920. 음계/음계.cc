#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int music[10] = { 0, };

	for (int i = 0; i < 8; i++)
	{
		cin >> music[i];
	}

	string check;

	for (int i = 0; i < 8; i++)
	{
		if (music[i] - 1 == music[i + 1])
		{
			check =  "descending";
			continue;
		}

		else if (music[i] + 1 == music[i + 1])
		{
			if (music[i + 1] == 8)
				break;
			check = "ascending";
			continue;
		}

		else
		{
			check = "mixed";
			break;
		}
	}

	cout << check;
	return 0;
}