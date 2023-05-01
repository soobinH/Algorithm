#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int num;
	cin >> num;

	int count = 0;

	for (int i = 0; i < num; i++)
	{
		bool result = false;
		string input;
		cin >> input;

		char check = ' '; // 글자 담을 변수

		// 첫 번째 반복문: 문자 하나씩 담기
		for (int k = 0; k < input.length()-1; k++)
		{
			check = input[k];

			// 두 번째 반복문: 문자열 검사
			for (int j = k+1; j < input.length(); j++)
			{
				// 담은 문자와 문자열에 있는 문자가 같을 때
				if (check == input[j])
				{
					// 그 다음 문자이면 탈출
					if (j == k + 1)
					{
						break;
					}

					// 그 다음 문자가 아니면
					else
					{
						result = true; // 아니라고 표시 후 탈출
						break;
					}
				}
			}

			// 조건에 맞지 않으면 탈출
			if (result)
				break;
		}

		if (result == false)
		{
			count++;
		}
	}

	std::cout << count << endl;
	return 0;
}