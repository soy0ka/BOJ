/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10026                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10026                          #+#        #+#      #+#    */
/*   Solved: 2025/03/16 11:33:11 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
/*
  각 칸을 노드로 보고 닿는 면을 edge로 보는 그래프
  일반인은 R G B 전부 따로 연결하는 조건부 그래프
  적녹색약은 전부 따로 하되 R - G도 같이 연결하는 조건부 그래프

  DFS로 연결된 노드를 방문하며 구역 개수를 세는 문제
  방문 배열을 이용해 이미 방문한 노드는 다시 방문하지 않도록 함
  적록색약인 경우 R - G를 같은 색으로 인식하므로 조건을 추가함
  각 구역을 DFS로 탐색하며 구역 개수를 세고 출력함
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n;
char **color;
bool **visited;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void dfs(int x, int y, char cur, bool colorBlind) {
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= n)
			continue;
		if (visited[nx][ny])
			continue;
		if (colorBlind) {
			if ((cur == 'B' && color[nx][ny] != 'B') || (cur != 'B' && color[nx][ny] == 'B'))
				continue;
		} else {
			if (color[nx][ny] != cur)
				continue;
		}
		dfs(nx, ny, color[nx][ny], colorBlind);
	}
}

int main() {
	scanf("%d", &n);
	color = (char **)malloc(sizeof(char *) * n);
	for (int i = 0; i < n; i++) {
		color[i] = (char *)malloc(sizeof(char) * (n + 1));
		scanf("%s", color[i]);
	}

	int countNormal = 0;
	visited = (bool **)malloc(sizeof(bool *) * n);
	for (int i = 0; i < n; i++)
		visited[i] = (bool *)calloc(n, sizeof(bool));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfs(i, j, color[i][j], false);
				countNormal++;
			}
		}
	}

	// 방문 배열 초기화
	for (int i = 0; i < n; i++)
		memset(visited[i], 0, sizeof(bool) * n);

	int countColorBlind = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfs(i, j, color[i][j], true);
				countColorBlind++;
			}
		}
	}

	printf("%d %d\n", countNormal, countColorBlind);

	for (int i = 0; i < n; i++) {
		free(color[i]);
		free(visited[i]);
	}
	free(color);
	free(visited);
	return 0;
}