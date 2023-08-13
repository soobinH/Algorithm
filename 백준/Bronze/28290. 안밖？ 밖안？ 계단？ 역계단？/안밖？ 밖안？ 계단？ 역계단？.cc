//안밖	검지 손가락에서 새끼손가락 순서대로 키보드를 치는 방법.	"fdsajkl;" 또는 "jkl;fdsa"
//밖안	새끼손가락에서 검지 손가락 순서대로 키보드를 치는 방법.	"asdf;lkj" 또는 ";lkjasdf"
//계단	왼쪽 새끼손가락에서 오른쪽 새끼손가락 순서대로 키보드를 치는 방법.	"asdfjkl;"
//역계단	오른쪽 새끼손가락에서 왼쪽 새끼손가락 순서대로 키보드를 치는 방법.	";lkjfdsa"
//출력은 입력에 따라 "in-out", "out-in", "stairs", "reverse" 중 하나를 출력한다.

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	cin >> input;

	if (input == "fdsajkl;" || input == "jkl;fdsa")
		cout << "in-out\n";

	else if (input == "asdf;lkj" || input == ";lkjasdf")
		cout << "out-in\n";

	else if (input == "asdfjkl;")
		cout << "stairs\n";

	else if (input == ";lkjfdsa")
		cout << "reverse\n";

	else
		cout << "molu\n";

	return 0;
}