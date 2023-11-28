#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int visit[1003];
vector<pair<int, int>> v[1003];
void dijkstra(int a) {
	priority_queue<pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>>> queue;

	queue.push(make_pair(0, a));
	visit[a] = 0;
	while (!queue.empty())
	{
		int cost = queue.top().first;
		int x = queue.top().second;
		queue.pop();

		if (visit[x] < cost)
			continue;

		for (int i = 0; i < v[x].size(); i++)
		{
			int nx = v[x][i].first;
			int ncost = cost + v[x][i].second;
			
			if (visit[nx] > ncost)
			{
				queue.push(make_pair(ncost, nx));
				visit[nx] = ncost;
			}
		}
	}
}

int main(void)
{
	int n, m;
	cin >> n >> m;

	v[0].push_back(make_pair(0, 0));
	memset(visit, 98765432, sizeof(visit));

	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
	}

	int st, dt; 
	cin >> st >> dt;

	dijkstra(st);
	cout << visit[dt]; 
	return 0;


}