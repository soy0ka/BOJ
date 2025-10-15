/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2468                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2468                           #+#        #+#      #+#    */
/*   Solved: 2025/10/14 15:27:05 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <numeric>
using namespace std;

#define endl '\n'
#define PRECISION 10

#define fr first
#define sc second

#define all(v) v.begin(), v.end()
#define compress(v) sort(all(v)), v.erase(unique(all(v)), v.end())

using ll = long long;
using ld = long double;

typedef pair<ll,ll> pll;
typedef pair<int,int> pii;

const int INF = 0x3f3f3f3f;
const ll LLINF = 4'500'000'000'000'000'000LL;
const ll MOD = 1'000'000'007LL;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

void dfs(
  int y,
  int x,
  const int h,
  const int n,
  vector<vector<bool>>& visited,
  const vector<vector<int>>& areas
) {
	visited[y][x] = true;
	for (int i=0;i<4;i++) {
		int nx = x + dx[i], ny = y + dy[i];
    if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
    if (!visited[ny][nx] && areas[ny][nx] > h) {
      dfs(ny,nx,h,n,visited,areas);
    }
	}
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);

  int n;
  cin >> n;
  vector<vector<int>> areas(n, vector<int>(n));


  for (int i=0;i<n;i++) {
    for (int j=0;j<n;j++) {
      cin >> areas[i][j];
    }
  }

  int maxArea = 0;
  //vector<int> simulations(9);
  for (int i=0;i<9;i++) {
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int cnt = 0;
    for (int y=0;y<n;++y) {
      for (int x=0;x<n;++x) {
        if (!visited[y][x] && areas[y][x] > i) {
          dfs(y, x, i, n, visited, areas);
          ++cnt;
        }
      }
    }
    maxArea = max(maxArea, cnt);
  }

  cout << maxArea;

  return 0;
}
