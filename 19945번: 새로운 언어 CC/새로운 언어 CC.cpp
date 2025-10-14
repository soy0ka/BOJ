/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 19945                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/19945                          #+#        #+#      #+#    */
/*   Solved: 2025/10/05 23:04:21 by yurihana      ###          ###   ##.kr    */
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
  
  if (n == 0) {
    cout << 1 << endl;
    return 0;
  }
  
  if (n < 0) {
    cout << 32 << endl;
    return 0;
  }
  
  int bits=0;
  while (n > 0) {
    bits++;
    n >>= 1;
  }
  
  cout << bits << endl;
  return 0;
}
