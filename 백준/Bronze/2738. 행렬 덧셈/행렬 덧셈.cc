#include <iostream>
using namespace std;

int main(void)
{
	int array1[100][100] = { 0, };
	int array2[100][100] = { 0, };
	int array3[100][100] = { 0, };

	int a, b;

	cin >> a >> b;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cin >> array1[i][j];
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cin >> array2[i][j];
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			array3[i][j] = array1[i][j] + array2[i][j];
			cout << array3[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}