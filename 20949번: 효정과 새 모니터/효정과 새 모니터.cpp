/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 20949                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/20949                          #+#        #+#      #+#    */
/*   Solved: 2025/10/04 22:39:59 by yurihana      ###          ###   ##.kr    */
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
  vector<pair<int, double>> monitors (n);
  for(int i=0;i<n;i++) {
    int h,w;
    cin >> w >> h;
    double ppi = (sqrt(pow(w,2) + pow(h,2)) / 77);
    monitors[i].fr = i+1;
    monitors[i].sc = ppi;
  }

  sort(all(monitors), [](const pair<int, double>& a, const pair<int, double>& b) {
    if (a.sc == b.sc) return a.fr < b.fr;
    return a.sc > b.sc;
  });

  for(const auto& monitor : monitors) {
    cout << monitor.fr << endl;
  }

  return 0;
}
