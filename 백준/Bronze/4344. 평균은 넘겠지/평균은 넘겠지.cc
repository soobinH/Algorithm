#include <iostream>
using namespace std;

int main(void)
{
	
	int score;
	int student;
	cin >> student;
	
	for (int i = 0; i < student; i++)
	{
		int avg = 0;
		double total = 0;
		avg = 0;
		double up = 0;

		cin >> score;
		double* test = new double[score];

		for (int i = 0; i < score; i++)
		{
			cin >> test[i];
			total += test[i];
		}

		avg = total / score; // 평균

		for (int i = 0; i < score; i++)
		{
			if (test[i] >avg)
				up++;
		}

		cout << fixed;
		cout.precision(3);
		cout << ((double)up / (double)score) * 100 << "%" << endl;
	}

	return 0;
}