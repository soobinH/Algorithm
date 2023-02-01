#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(void) {

    stack<int>s;
    int input;
    cin >> input;
    
    string result;
    bool isvalid = 1;
    int j = 1;

    for (int i = 0; i < input; i++) { //수열 저장x
        int a;
        cin >> a;

        while (j <= a) {
            s.push(j++);
            result += "+";
        }
        if (s.top() == a) {
            s.pop();
            result += "-";
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}