#include <iostream>
using namespace std;

int main(void)
{
	int h, m, oven;
	cin >> h >> m >> oven;
	
    h += oven / 60;
    m += oven % 60;

    if (m >= 60)
    {
        h += m / 60;
        m = m % 60;
    }

    if (h >= 24)
        h -=  24;
    
    cout << h << " " << m << endl;
    return 0;

}
