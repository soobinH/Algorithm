#include <iostream>
using namespace std;

int main(void)
{
	int first = 2;

	int input;
	cin >> input;

	int add_dots = 1;
	int result_edge = 0;
	int all_dots = 0;

	result_edge = first + add_dots;

		for (int i = 0; i < input-1; i++)
		{
			add_dots *= 2;
			first = result_edge;
			result_edge = first + add_dots;
		}

		all_dots = result_edge * result_edge;
		cout << all_dots;
		return 0;
}