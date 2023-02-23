#include <iostream>
using namespace std;

int main(void)
{
	int num;
	cin >> num;

	for (int i = 0; i < num / 4; i++)
	{
		cout << "long ";
	}

	cout << "int\n";
	return 0;
}