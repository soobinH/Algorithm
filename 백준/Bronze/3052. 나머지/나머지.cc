#include <iostream>
using namespace std;

int main(void)
{

	int count = 0;
	int* array = new int[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
		array[i] = array[i] % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		int N = 0;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
				N++;
		}
		if (N == 0)
			count++;
	}

	cout << count << endl;
	return 0;
}