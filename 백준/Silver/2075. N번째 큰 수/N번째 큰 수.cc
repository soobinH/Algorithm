#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> q;
	int temp;

	for (int i = 0; i < n * n; i++) {
		cin >> temp;
		q.push(temp);
		if (q.size() > n)
			q.pop();
	}

	cout << q.top();
}