/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 7569                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/7569                           #+#        #+#      #+#    */
/*   Solved: 2025/05/31 01:11:21 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

struct Cordinates {
  int x, y, z;
  int day;
};

using namespace std;
int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int width, depth, height;
  cin >> width >> depth >> height;

  int dx[] = {0, 0, 1, -1, 0, 0};
  int dy[] = {1, -1, 0, 0, 0, 0};
  int dz[] = {0, 0, 0, 0 , 1, -1};
  int maxDays = 0;

  vector<vector<vector<int>>> tomatoes (height, vector<vector<int>> (depth, vector<int>(width)));
  vector<vector<vector<bool>>> visited (height, vector<vector<bool>> (depth, vector<bool>(width, false)));
  for (int z=0; z<height; z++) {
    for (int y=0; y<depth; y++) {
      for (int x=0; x<width; x++) {
        cin >> tomatoes[z][y][x];
      }
    }
  }

  queue<Cordinates> q;

  for (int z=0; z<height; z++) {
    for (int y=0; y<depth; y++) {
      for (int x=0; x<width; x++) {
        if (tomatoes[z][y][x] == 1) {
          q.push({x, y, z, 0});
          visited[z][y][x] = true;
        }
      }
    }
  }

  while (!q.empty()) {
    auto [x, y, z, day] = q.front(); q.pop();
    maxDays = max(maxDays, day);

    for (int dir=0; dir<6; dir++) {
      int cx = x + dx[dir];
      int cy = y + dy[dir];
      int cz = z + dz[dir];

      if (cx < 0 || cy < 0 || cz < 0 || cx >= width || cy >= depth || cz >= height) continue;
      if (visited[cz][cy][cx]) continue;
      if (tomatoes[cz][cy][cx] != 0) continue;

      visited[cz][cy][cx] = true;
      tomatoes[cz][cy][cx] = 1;
      q.push({cx, cy, cz, day + 1});
    }
  }
    
  for (int z=0; z<height; z++) {
    for (int y=0; y<depth; y++) {
      for (int x=0; x<width; x++) {
        if (tomatoes[z][y][x] == 0) {
          cout << -1; return 0;
        }
      }
    }
  }

  cout << maxDays;
}
