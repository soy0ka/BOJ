/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 14916                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/14916                          #+#        #+#      #+#    */
/*   Solved: 2025/10/21 08:47:04 by yurihana      ###          ###   ##.kr    */
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

const vector<int> coins = { 2, 5 };

int coin (vector<int>coins, int amount) {
  vector<int> dp(amount+1, INF);
  dp[0] = 0;

  for (auto &coin : coins) {
    for (int i=coin;i<=amount;i++) {
      dp[i] = min(dp[i], dp[i-coin] + 1);
    }
  }
  return dp[amount] != INF ? dp[amount] : -1 ;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);

  int n;
  cin >> n;
  cout << coin(coins, n);
  return 0;
}
