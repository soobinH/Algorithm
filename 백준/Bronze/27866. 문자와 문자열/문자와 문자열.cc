#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	cin >> input;

	int num;
	cin >> num;

	cout << input[num - 1] << endl;
	return 0;
}