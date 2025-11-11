/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 32932                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/32932                          #+#        #+#      #+#    */
/*   Solved: 2025/10/21 21:11:05 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <set>
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

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);

  int n,k;
  cin >> n >> k;
  set<pii> block;
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    block.insert({x, y});
  }

  string cmd;
  cin >> cmd;

  int x = 0, y = 0;
  for (char c : commands) {
    int nx = x, ny = y;
    if (c == 'U') ny++;
    else if (c == 'D') ny--;
    else if (c == 'R') nx++;
    else if (c == 'L') nx--;
    if (!block.count({nx, ny})) {
      x = nx;
      y = ny;
    }
  }

  cout << x << " " << y << "\n";
  return 0;
}
