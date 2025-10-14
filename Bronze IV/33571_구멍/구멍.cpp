/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 33571                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/33571                          #+#        #+#      #+#    */
/*   Solved: 2025/09/27 23:12:19 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <numeric>
#include <map>
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
const map<char, int> holes = {
  {'A', 1},
  {'a', 1},
  {'B', 2},
  {'b', 1},
  {'D', 1},
  {'d', 1},
  {'e', 1},
  {'g', 1},
  {'O', 1},
  {'o', 1},
  {'P', 1},
  {'p', 1},
  {'Q', 1},
  {'q', 1},
  {'R', 1},
  {'@', 1}
};

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed); cout.precision(PRECISION);
  string s;
  while (getline(cin, s)) {
    int count = 0;
    for (char c : s) {
      if (holes.count(c)) {
        count += holes.at(c);
      }
    }
    cout << count << endl;
  }
  return 0;
}
