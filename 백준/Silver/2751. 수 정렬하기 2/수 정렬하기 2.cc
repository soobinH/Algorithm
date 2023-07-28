#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int tryNum = 0;
	cin >> tryNum;
	int* input = new int[tryNum];

	for (int i = 0; i < tryNum; i++)
	{
		cin >> input[i];
	}

	sort(input, input + tryNum);

	for (int i = 0; i < tryNum; i++)
	{
		cout << input[i] << "\n";
	}

	delete[] input;
	return 0;
}