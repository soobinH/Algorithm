#include <iostream>
using namespace std;

int main(void)
{
	int* array = new int[9];
	int max=0;
	int index = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> array[i];
		if (max < array[i])
		{
			max = array[i];
			index = i + 1;
		}
			
	}

	cout << max << endl << index << endl;
	return 0;
}