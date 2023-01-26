#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	int alphabet[26] = {0, };
	int count = 0;

	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		alphabet[(int)tolower((int)input[i]) - 97]++;
	}

	int max = 0; 
	int max_index = 0;


	// 최대 사용 횟수 확인
	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			max_index = i;
		}
	}


	// 최대 사용 알파벳 판별(가장 많이 사용한 알파벳이 여러 개인가?)
	for (int i = 0; i < 26; i++)
	{
		if (max == alphabet[i])
		{
			count++;
		}
	}

	if (count > 1)
		cout << "?" << endl;

	else
		cout << (char)(max_index+65) << endl;

	return 0;
}