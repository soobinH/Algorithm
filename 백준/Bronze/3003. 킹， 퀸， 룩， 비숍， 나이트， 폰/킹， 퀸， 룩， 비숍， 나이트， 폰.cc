#include <iostream>
using namespace std;

int main(void)
{
	int chess[6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		cin >> chess[i];
	}

	cout << 1 - chess[0] <<  " " << 1 - chess[1]<< " " << 2 - chess[2] << " " << 2 - chess[3] << " " << 2 - chess[4] << " " << 8 - chess[5];
	return 0;
}