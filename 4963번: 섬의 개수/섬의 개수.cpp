/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4963                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4963                           #+#        #+#      #+#    */
/*   Solved: 2025/05/01 10:05:39 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief 이차원 int 벡터에서 인접한 (상,하,좌,우,대각선)의 영토를 탐색합니다
 *
 * @param start pair<x, y> 입니다. 시작지점의 좌표
 * @param map vector<vector<int>> w * h 크기의 배열 (0: 물, 1: 섬)
 * @param visited vector<vector<bool>> w * h 크기의 2차원 벡터, map 에서 방문한 좌표를 기억합니다
 * @return DFS를 마친 후의 visited vector<vector<bool>>를 리턴합니다
 *
 * @note [상추](https://solved.ac/profile/sangchoo1201)가 시킴
 */
vector<vector<bool>> dfs(pair<int, int> start, const vector<vector<int>> &map, vector<vector<bool>> visited) {
  static const int Δx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
  static const int Δy[] = {1, 1, 1, 0, 0, -1, -1, -1};

  visited[start.first][start.second] = true;

  for (int dir = 0; dir < 8; dir++) {
    int x = x + Δx[dir];
    int y = y + Δy[dir];
  }
  return visited;
}

bool checkVisited (const vector<vector<bool>> &visited) {
  for (int i = 0; i < visited.size(); i++) {
    for (int j = 0; j < visited[i].size(); j++) {
      if (!visited[i][j]) {
        return false;
      }
    }
  }

  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int width = 0, height = 0;
  vector<vector<int>> map;

  while (true) {
    cin >> width >> height;
    if (width == 0 && height == 0)
      break;

    map.resize(height, vector<int>(width));
    for (int i = 0; i < height; i++) {
      for (int j = 0; j < width; j++) {
        cin >> map[i][j];
      }
    }

    int count = 0;
    vector<vector<bool>> visited(height, vector<bool>(width));
  
    while (true) {
      for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
          if (map[i][j] == 1 && !visited[i][j]) {
            visited = dfs({i, j}, map, visited);
            count++;
          }
        }
      }
      if (checkVisited(visited)) break;
    }
    cout << count << "\n";
  }

  return 0;
}
