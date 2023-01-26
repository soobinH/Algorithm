#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string a;
	string b;


	cin >> a >> b;

	string result;

	for (int i = 2; i >= 0; i--)
	{

		// 반복문 들어간 후, 한 글자라도 더 크면 탈출 후 출력(같으면 반복문 계속 진행)
		if (a[i] > b[i])
		{
			result = a;
			break;
		}
		
		if(a[i] < b[i])
		{
			result = b;
			break;
		}
	}

	cout << result[2] << result[1] << result[0];

	return 0;
}