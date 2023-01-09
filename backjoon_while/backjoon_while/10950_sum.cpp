#include <iostream>
using namespace std;

int main(void)
{
	int choice;
	cin >> choice;
	int* a = new int[choice];
	int* b = new int[choice];
	int* sum = new int[choice];

	for (int i = 0; i < choice; i++)
	{
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < choice; i++)
	{
		sum[i] = a[i] + b[i];
		cout << sum[i] << endl;
	}
	return 0;
}