/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 14940                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/14940                          #+#        #+#      #+#    */
/*   Solved: 2025/04/28 16:05:29 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int dx[] = {1, -1, 0, 0}; 
const int dy[] = {0, 0, 1, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n, m;
  pair<int, int> start;
  vector<vector<int>> map;
  vector<vector<int>> dist;
  queue<pair<int, int>> visit;

  cin >> n >> m;
  map.resize(n, vector<int>(m));
  dist.resize(n, vector<int>(m,-1));

  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      cin >>map[i][j];
      if (map[i][j] == 2) {
        start.first = i;
        start.second = j;
      }
      if (map[i][j] == 0) {
        dist[i][j] = 0;
      }
    }
  }

  visit.push(start);
  dist[start.first][start.second] = 0;
  while (!visit.empty()) {
    auto [x, y] = visit.front();
    visit.pop();

    for (int dir=0;dir<4;dir++) {
      int nx = x + dx[dir];
      int ny = y + dy[dir];

      if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
        if (map[nx][ny] == 1 && dist[nx][ny] == -1) {
          dist[nx][ny] = dist[x][y] + 1;
          visit.push({nx, ny});
        }
      }
    }
  }

  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      cout << dist[i][j] << ' ';
    }
    cout << "\n";
  }
  return 0;
}
