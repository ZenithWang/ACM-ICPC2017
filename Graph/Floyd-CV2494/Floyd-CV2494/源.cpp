#include<stdio.h>
using namespace std;

int map[301][301], c[1001], p[1001], i, j, k, n, m, x, y, t, ans;

int dfs(int x) {

	int i, j;

	for (i = 1; i <= n; i++) {

		if (map[x][i]) {

			if (c[i] == t) continue; c[i] = t;

			if (!p[i] || dfs(p[i])) {

				p[i] = x;

				return true;

			}

		}

	}

	return false;

}

int main() {

	scanf("%d%d", &n, &m);

	for (i = 1; i <= m; i++) {

		scanf("%d%d", &x, &y);

		map[x][y] = 1;

	}

	for (k = 1; k <= n; k++)

		for (i = 1; i <= n; i++)

			for (j = 1; j <= n; j++)

				map[i][j] = map[i][j] || (map[i][k] && map[k][j]);

	ans = n;

	for (i = 1; i <= n; i++) {

		t++;

		ans -= dfs(i);

	}

	printf("%d\n", ans);

}