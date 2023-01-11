#include <iostream>
using namespace std;

int main(void)
{
	int size;
	double max = 0;
	double total = 0;
	cin >> size;
	double* score = new double[size];

	for (int i = 0; i < size; i++)
	{
		cin >> score[i];
		if (max < score[i])
			max = score[i];
	}

	for (int i = 0; i < size; i++)
	{
		score[i] = score[i] / max * 100;
		total += score[i];
	}

	cout << total / size << endl;
	return 0;
}