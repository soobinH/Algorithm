#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	cin >> input;

	string h;

	if (input.length() >= 5)
	{
		h.append(input, input.length() - 5, 5);
	}

	else
	{
		h = input;
	}
	
	

	if (h == "driip")
		cout << "cute\n";

	else
		cout << "not cute\n";

	return 0;
}