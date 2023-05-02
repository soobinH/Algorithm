#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	stack<char>Stack;

	long long input;
	int B;
	cin >> input >> B;

	int trash = 0;

	while (1)
	{

		if (input < B)
			break;

		trash = input % B;

		if (trash >= 10)
			Stack.push(trash + 55);

		else
			Stack.push(trash + 48);

		input = input / B;

	}

	if (input >= 10)
	{
		Stack.push(input + 55);
	}

	else
		Stack.push(input + 48);

	while(!Stack.empty())
	{
		cout << Stack.top();
		Stack.pop();
	}

	cout << endl;

	return 0;
}