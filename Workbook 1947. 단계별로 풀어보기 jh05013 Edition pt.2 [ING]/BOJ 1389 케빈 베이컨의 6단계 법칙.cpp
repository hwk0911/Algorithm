#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

vector <int> a[101];

int c[101], d[101], ans[101], t = 1000;
int n, m, u, v, sum;

void BFS(int num)
{
	queue <int> que;
	que.push(num);
	c[num] = 1;
	while (!que.empty())
	{
		int x = que.front();
		que.pop();
		for (int i = 0; i < a[x].size(); i++)
		{
			int y = a[x][i];
			if (c[y] == 0)
			{
				que.push(y);
				c[y] = 1;
				d[y] = d[x] + 1;
			}
		}
	}
}

int main() {
	cin >> n >> m;
	while (m--)
	{
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for (int i = 1; i <= n; i++)
	{
		memset(c, 0, sizeof(c));
		memset(d, 0, sizeof(d));
		sum = 0;
		BFS(i);
		for (int j = 1; j <= n; j++)
		{
			sum += d[j];
		}
		ans[i] = sum;
	}
	for (int i = 1; i <= n; i++)
	{
		if (t > ans[i])
			t = ans[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if (t == ans[i])
		{
			cout << i;
			break;
		}

	}
}

/*
Input 1:
5 5
1 3
1 4
4 5
4 3
3 2

Output 1:
3
*/