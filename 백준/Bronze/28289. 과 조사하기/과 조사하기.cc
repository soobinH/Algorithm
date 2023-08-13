#include <iostream>
using namespace std;

int main(void)
{
	int tryN = 0;
	cin >> tryN;
	int gradeN = 0, classN = 0, numN = 0;
	int chick = 0;

	int softwareClass = 0, IsoftwareClass = 0, AIsoftwareClass = 0;

	for (int i = 0; i < tryN; i++)
	{
		cin >> gradeN >> classN >> numN;

		if (gradeN == 1)
			chick++;

		else
		{
			switch (classN) {
			case 1: case 2:
				softwareClass += 1;
				break;

			case 3:
				IsoftwareClass += 1;
				break;

			case 4:
				AIsoftwareClass += 1;
				break;
			}
		}
	}

	cout << softwareClass << "\n" << IsoftwareClass << "\n" << AIsoftwareClass << "\n" << chick;

	return 0;
}