#include <iostream>
using namespace std;


int main(void)
{
	int num;


	cin >> num;

	int* array = new int [num];

	for (int i = 0; i < num; i++)
	{
		cin >> array[i];
	}

	int find;


	cin >> find;

	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if (array[i] == find)
			count++;
	}

	cout << count;

	delete[] array;
	return 0;

}