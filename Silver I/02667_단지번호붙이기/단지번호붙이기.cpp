/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2667                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2667                           #+#        #+#      #+#    */
/*   Solved: 2025/05/30 11:52:25 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int dx[] = {0, 0 ,1, -1};
int dy[] = {1, -1, 0, 0};
int bfs(
  vector<vector<int>> *dangi, 
  vector<vector<bool>> *visited,
  pair<int,int> cordinate,
  int max
) {
  int count = 1;
  queue<pair<int,int>> q;
  q.push(cordinate);
  (*visited)[cordinate.first][cordinate.second] = 1;
  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    for (int i=0;i<4;i++) {
      if ((x+dx[i] >= max || y+dy[i] >= max) || (x+dx[i] < 0 || y+dy[i] < 0)) continue;
      if (!(*visited)[x+dx[i]][y+dy[i]] && (*dangi)[x+dx[i]][y+dy[i]] == 1) {
        (*visited)[x+dx[i]][y+dy[i]] = 1;
        q.push({x+dx[i],y+dy[i]});
        count++;
      }
    }
  }

  return count;
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n=0;
  cin >> n;
  // vector<vector<int>> dangi(n);
  vector<vector<int>> dangi(n, vector<int>(n, 0));
  vector<vector<bool>> visited(n, vector<bool>(n, 0));
  vector<int> house;

  for (int i=0;i<n;i++) {
    string temp;
    cin >> temp;
    for (int j=0;j<n;j++) {
      dangi[i][j] = temp[j] == '1';
    } 
  }

  for (int i=0;i<n;i++) {
    for (int j=0;j<n;j++) {
      if (!visited[i][j] && dangi[i][j] == 1) {
        house.push_back(bfs(&dangi, &visited, {i, j}, n));
      }
    }
  }

  sort(house.begin(), house.end());
  cout << house.size() << "\n";
  for (int i=0;i<house.size();i++) {
    cout << house[i] << "\n";
  }
}
