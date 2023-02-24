#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	double count = 0; // 총 학점
	double total = 0; // 평점*학점의 전체 합

	for (int i = 0; i < 20; i++)
	{
		string name; // 과목명
		string score; // 평점
		double input;

		cin >> name >> input >> score;

		if (score == "P")
		{
			continue;
		}

		count += input;

		if (score == "F")
		{
			continue;
		}

		else if (score == "A+")
		{
			total += (input * 4.5);
		}

		else if (score == "A0")
		{
			total += (input * 4.0);
		}

		else if (score == "B+")
		{
			total += (input * 3.5);
		}

		else if (score == "B0")
		{
			total += (input * 3.0);
		}
			
		else if (score == "C+")
		{
			total += (input * 2.5);
		}
			
		else if (score == "C0")
		{
			total += (input * 2.0);
		}
			
		else if (score == "D+")
		{
			total += (input * 1.5);
		}

		else if (score == "D0")
		{
			total += (input * 1.0);
		}
			
	}

	cout << fixed;
	cout.precision(6);

	cout << total / count;
	return 0;
}