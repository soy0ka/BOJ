/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 3216                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/3216                           #+#        #+#      #+#    */
/*   Solved: 2025/07/12 18:22:18 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <vector>
#include <utility>
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
const ll LLINF = 4'500'000'000'000'000'000;
const ll MOD = 1'000'000'007;

bool isPlayable(int delay, const vector<pii>& songs) {
  int totalDown = 0;
  int totalPlay = 0;

  for (const auto& [duration, time]: songs) {
    totalDown += time;
    if (delay + totalPlay < totalDown) {
      return false;
    }
    totalPlay += duration;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);

  int n;
  int length = 0;
  cin >> n;
  vector<pii> songs (n);
  for (int i=0;i<n;i++) {
    cin >> songs[i].first >> songs[i].second;
    length += songs[i].second;
  }

  int left=0, right = length, least = right;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (isPlayable(mid, songs)) {
      least = mid;
      right = mid - 1;
    } else {
      right = mid + 1;
    }
  }

  cout << least;
}
