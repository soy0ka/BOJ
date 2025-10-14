/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 13458                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/13458                          #+#        #+#      #+#    */
/*   Solved: 2025/10/11 01:22:44 by yurihana      ###          ###   ##.kr    */
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

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);

  int n;
  cin >> n;

  vector<int> examinees(n);
  for (int i = 0; i < n; i++) {
    cin >> examinees[i];
  }

  int b, c;
  cin >> b >> c;

  long long total = 0;

  for (int i = 0; i < n; i++) {
    total++;
    int remain = examinees[i] - b;
    if (remain > 0) {
      total += (remain + c - 1) / c;
    }
  }

  cout << total << endl;

  return 0;
}
