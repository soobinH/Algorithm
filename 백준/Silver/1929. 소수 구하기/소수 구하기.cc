#include <iostream>
using namespace std;

#define MAX 1000000

int num[MAX + 1] { 0, };

int main(void)
{

	int a = 0;
	int b = 0;

	cin >> a >> b;

	for (int i = 2; i <= b; i++)
	{
		num[i] = i;
	}

	for (int i = 2; i * i <= b; i++)
	{
		if (num[i] == 0)
			continue;


		// i의 배수를 소거
		for (int j = i * i; j <= b; j += i)
		{
			num[j] = 0;
		}
	}
	
	for (int i = a; i <= b; i++)
	{
		if (num[i] != 0)
			cout << num[i] << '\n';
	}

	return 0;
}