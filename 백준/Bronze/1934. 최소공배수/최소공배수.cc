#include <iostream>
using namespace std;

int calculate(int a, int b);

int main(void)
{
	int N = 0;
	int a, b = 0;

	cin >> N;
	
	int result = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;

		if (a < b)
		{
			result = a * b / calculate(b, a);
		}

		else result = a * b / calculate(a, b);

		cout << result << endl;
	}

	
	return 0;

}

int calculate(int a, int b)
{
	if (a % b == 0)
		return b;

	return calculate(b, a % b);
}