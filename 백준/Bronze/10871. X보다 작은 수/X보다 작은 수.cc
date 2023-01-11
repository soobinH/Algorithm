#include <iostream>
using namespace std;

int main(void)
{
	int size = 0;
	int x;
	cin >> size >> x;
	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
		if (array[i] < x)
			cout << array[i] << " ";
	}

	return 0;

}