#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int stringN;
	cin >> stringN;



	for (int i = 0; i < stringN; i++)
	{
		int paternN;
		string patern;

		cin >> paternN >> patern;

		for (int j = 0; j < patern.length(); j++)
		{
			for (int k = 0; k < paternN; k++)
				cout << patern[j];
		}
		cout << endl;
	}


	
	return 0;
}