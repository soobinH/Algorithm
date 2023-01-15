#include <iostream>

using namespace std;

int main()
{
    int num1;
    cin >> num1;

    char* array = new char[num1];

    cin >> array;
    int sum = 0;

    for (int i = 0; i < num1; i++)
    {
        sum += array[i] - '0';
    }

    cout << sum << endl;

    return 0;
}